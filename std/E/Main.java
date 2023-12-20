import java.io.*;

public class Main
{
    private static final StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
    private static final BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    private static final PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

    static class Point {
        double x, y;
        Point(double x, double y) {
            this.x = x;
            this.y = y;
        }
    }

    private static Point get_diff(Point P, Point Q) {
        return new Point(P.x - Q.x, P.y - Q.y);
    }
    private static double Cross(Point A, Point B) {
        return A.x *  B.y - B.x * A.y;
    }
    private static Point get_numMulti(Point a, double t) {
        return new Point(a.x * t, a.y * t);
    }
    private static Point get_Add(Point a, Point b) {
        return new Point(a.x + b.x, a.y + b.y);
    }
    private static Point Get_line_intersection(Point P,Point v,Point Q,Point w)
    {
        Point u = get_diff(P, Q);
        double t = Cross(w, u) / Cross(v, w);
        return get_Add(P, get_numMulti(v, t));
    }

    public static int readInt() {
        try {
            st.nextToken();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return (int) st.nval;
    }

    public static double readDouble() {
        try {
            st.nextToken();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return st.nval;
    }

    private static void solve()
    {
        int n = readInt();
        int x = readInt(), y = readInt();
        if (n <= 13)
        {
            out.println("! impossible");
            out.flush();
            return;
        }
        out.printf("? %d %d\n", x, y);
        out.flush();
        double r1 = readDouble();
        if ((r1 >= Math.PI / 4 && r1 <= 3 * Math.PI / 4) || (r1 <= -1 * Math.PI / 4 && r1 >= -3 * Math.PI / 4))
        {
            out.printf("? %d %d\n", x + 20, y);
            out.flush();
            double r2 = readDouble();
            Point a = new Point(x, y);
            Point va = new Point(Math.cos(r1), Math.sin(r1));
            Point b = new Point(x + 20, y);
            Point vb = new Point(Math.cos(r2), Math.sin(r2));
            Point ret = Get_line_intersection(a, va, b, vb);
            out.printf("! %d %d\n", Math.round(ret.x), Math.round(ret.y));
            out.flush();
        }
        else
        {
            out.printf("? %d %d\n", x, y - 20);
            out.flush();
            double r2 = readDouble();
            Point a = new Point(x, y);
            Point va = new Point(Math.cos(r1), Math.sin(r1));
            Point b = new Point(x, y - 20);
            Point vb = new Point(Math.cos(r2), Math.sin(r2));
            Point ret = Get_line_intersection(a, va, b, vb);
            out.printf("! %d %d\n", Math.round(ret.x), Math.round(ret.y));
            out.flush();
        }
    }

    public static void main(String[] args)
    {
        int T = readInt();
        while (T --> 0)
        {
            solve();
        }
    }
}