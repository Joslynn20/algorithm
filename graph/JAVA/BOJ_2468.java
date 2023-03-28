package graph;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_2468 {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb = new StringBuilder();

	// 지역의 사이즈
	static int N;
	static int max, maxIdx;

	static int[][] map;

	static boolean[][] visited;

	static int[] dr = { -1, 1, 0, 0 };
	static int[] dc = { 0, 0, -1, 1 };

	static class Node {
		int row;
		int col;

		public Node(int row, int col) {
			this.row = row;
			this.col = col;
		}

	}

	public static void main(String[] args) throws IOException {

		maxIdx = -1;

		N = Integer.parseInt(br.readLine());

		map = new int[N][N];

		String[] input = null;
		for (int i = 0; i < N; i++) {
			input = br.readLine().split(" ");
			for (int j = 0; j < N; j++) {
				map[i][j] = Integer.parseInt(input[j]);

				maxIdx = Math.max(map[i][j], maxIdx);
			}
		}

		// 침수 높이 0일때,
		max = -1;
		for (int i = 0; i <= maxIdx ; i++) {
			visited = new boolean[N][N];
			int cnt = 0;
			for (int r = 0; r < N; r++) {
				for (int c = 0; c < N; c++) {
					if (!visited[r][c] && map[r][c] > i) {
						dfs(i, r, c);
						cnt++;
					}
				}
			}
			max = Math.max(max, cnt);
		}

		System.out.println(max);

	}

	private static void dfs(int limit, int row, int col) {

		// 방문처리
		visited[row][col] = true;

		for (int d = 0; d < 4; d++) {
			int nx = row + dr[d];
			int ny = col + dc[d];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
				continue;
			if (visited[nx][ny] || map[nx][ny] <= limit)
				continue;

			dfs(limit, nx, ny);
		}

	}

}
