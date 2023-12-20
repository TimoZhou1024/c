public class Main {
    public static void main(String[] args) {
        D.main(args);
    }
}

class D {
    public static void main(String[] args) {
        Input input = new Input();
        Output output = new Output();
        int n = input.nextInt();
        int q = input.nextInt();
        int[] a = input.nextInts(n);
        int sqrtN = (int) Math.sqrt(n);
        long[][] prefixes = new long[sqrtN + 1][n];
        for (int i = 1; i <= sqrtN; i++) {
            long[] prefix = prefixes[i];
            for (int j = 0; j < i; j++)
                prefix[j] = a[j];
            for (int j = i; j < n; j++)
                prefix[j] = prefix[j - i] + a[j];
        }
        for (int i = 0; i < q; i++) {
            int l = input.nextInt() - 1;
            int r = input.nextInt() - 1;
            int d = input.nextInt();
            long answer;
            if (d <= sqrtN)
                answer = prefixes[d][r] - (l >= d ? prefixes[d][l - d] : 0);
            else {
                answer = 0;
                for (int j = l; j <= r; j += d)
                    answer += a[j];
            }
            output.append(answer).appendNewLine();
        }
        output.flush();
    }
}

class Input {
    private final byte[] buffer;
    private int pos;

    public Input() {
        try {
            buffer = new byte[System.in.available() + 1];
            buffer[buffer.length - 1] = '\n';
            System.in.read(buffer);
        } catch (Exception ex) {
            throw new RuntimeException(ex);
        }
    }

    public byte[] next(int n) {
        while (true) {
            byte b = buffer[pos++];
            if (b != '\n' && b != '\r') {
                pos--;
                break;
            }
        }
        byte[] bytes = new byte[n];
        System.arraycopy(buffer, pos, bytes, 0, n);
        pos += n;
        return bytes;
    }

    public byte[] next() {
        int from;
        while (true) {
            byte b = buffer[pos++];
            if (b != ' ' && b != '\n' && b != '\r') {
                from = pos;
                break;
            }
        }
        byte[] bytes;
        while (true) {
            byte b = buffer[pos++];
            if (b == ' ' || b == '\n') {
                bytes = new byte[pos - from];
                break;
            } else if (b == '\r') {
                bytes = new byte[pos++ - from];
                break;
            }
        }
        System.arraycopy(buffer, from - 1, bytes, 0, bytes.length);
        return bytes;
    }

    public byte[] nextLine() {
        int from = pos;
        byte[] bytes;
        while (true) {
            byte b = buffer[pos++];
            if (b == '\n') {
                bytes = new byte[pos - from - 1];
                break;
            } else if (b == '\r') {
                bytes = new byte[pos++ - from - 1];
                break;
            }
        }
        System.arraycopy(buffer, from, bytes, 0, bytes.length);
        return bytes;
    }

    public byte nextChar() {
        while (true) {
            byte b = buffer[pos++];
            if (b != ' ' && b != '\n' && b != '\r')
                return b;
        }
    }

    public int nextInt() {
        int n;
        boolean positive;
        while (true) {
            byte b = buffer[pos++];
            if (b == '-') {
                positive = false;
                n = buffer[pos++] - '0';
                break;
            } else if (b >= '0' && b <= '9') {
                positive = true;
                n = b - '0';
                break;
            }
        }
        while (true) {
            byte b = buffer[pos++];
            if (b >= '0' && b <= '9')
                n = n * 10 + b - '0';
            else {
                if (b == '\r')
                    pos++;
                return positive ? n : -n;
            }
        }
    }

    public long nextLong() {
        long n;
        boolean positive;
        while (true) {
            byte b = buffer[pos++];
            if (b == '-') {
                positive = false;
                n = buffer[pos++] - '0';
                break;
            } else if (b >= '0' && b <= '9') {
                positive = true;
                n = b - '0';
                break;
            }
        }
        while (true) {
            byte b = buffer[pos++];
            if (b >= '0' && b <= '9')
                n = n * 10 + b - '0';
            else {
                if (b == '\r')
                    pos++;
                return positive ? n : -n;
            }
        }
    }

    public double nextDouble() {
        long n;
        boolean positive;
        while (true) {
            byte b = buffer[pos++];
            if (b == '-') {
                positive = false;
                n = buffer[pos++] - '0';
                break;
            } else if (b >= '0' && b <= '9') {
                positive = true;
                n = b - '0';
                break;
            }
        }
        while (true) {
            byte b = buffer[pos++];
            if (b >= '0' && b <= '9')
                n = n * 10 + b - '0';
            else if (b == '.')
                break;
            else
                return positive ? n : -n;
        }
        long m = 0;
        long o = 1;
        while (true) {
            byte b = buffer[pos++];
            if (b >= '0' && b <= '9') {
                m = m * 10 + b - '0';
                o *= 10;
            } else {
                if (b == '\r')
                    pos++;
                double d = n + (double) m / o;
                return positive ? d : -d;
            }
        }
    }

    public int[] nextInts(int n) {
        int[] ints = new int[n];
        for (int i = 0; i < n; i++)
            ints[i] = nextInt();
        return ints;
    }

    public long[] nextLongs(int n) {
        long[] longs = new long[n];
        for (int i = 0; i < n; i++)
            longs[i] = nextLong();
        return longs;
    }
}

class Output {
    private static final int BUFFER_SIZE = 1048576;
    private static final boolean CRLF = System.lineSeparator().equals("\r\n");
    private final byte[] buffer = new byte[BUFFER_SIZE];
    private int pos;

    public Output append(String s) {
        int length = s.length();
        ensureCapacity(length);
        for (int i = 0; i < length; i++)
            buffer[pos++] = (byte) s.charAt(i);
        return this;
    }

    public Output append(byte[] bytes) {
        if (BUFFER_SIZE - pos < bytes.length) {
            flush();
            if (bytes.length > BUFFER_SIZE) {
                System.out.write(bytes, 0, bytes.length);
                return this;
            }
        }
        for (byte b : bytes)
            buffer[pos++] = b;
        return this;
    }

    public Output append(byte[] bytes, int from, int to) {
        int length = to - from;
        if (BUFFER_SIZE - pos < length) {
            flush();
            if (length > BUFFER_SIZE) {
                System.out.write(bytes, from, length);
                return this;
            }
        }
        for (int i = from; i < to; i++)
            buffer[pos++] = bytes[i];
        return this;
    }

    public Output append(byte b) {
        ensureCapacity(1);
        buffer[pos++] = b;
        return this;
    }

    public Output append(char c) {
        return append((byte) c);
    }

    public Output append(int i) {
        return append(Integer.toString(i));
    }

    public Output append(long l) {
        return append(Long.toString(l));
    }

    public Output append(double d) {
        return append(Double.toString(d));
    }

    public void appendNewLine() {
        ensureCapacity(2);
        if (CRLF)
            buffer[pos++] = '\r';
        buffer[pos++] = '\n';
    }

    public void flush() {
        System.out.write(buffer, 0, pos);
        pos = 0;
    }

    private void ensureCapacity(int n) {
        if (BUFFER_SIZE - pos < n)
            flush();
    }
}