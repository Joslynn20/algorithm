package 조합;

import java.util.Arrays;

public class 조합_2 {
	// 재귀를 이용해서 조합
	static String[] 재료 = { "상추", "패티", "토마토", "치즈" };

	static int N = 4; // 전체 재료 수
	static int R = 2; // 뽑을 재료 수

	static String[] sel = new String[R]; // 내가 선택한 토핑

	public static void main(String[] args) {
		recursion(0, 0);
	}

	// idx : 이번 깊이에서 고려할 재료
	static void recursion(int idx, int selIdx) {

		// 두 개의 조건의 순서가 중요

		// 재료 선택 완료 - 가장 먼저 오는 기저 조건
		if (selIdx == R) {
			System.out.println(Arrays.toString(sel));
			return;
		}

		// 모든 재료 고려
		if (idx == N) {
			return;
		}

		sel[selIdx] = 재료[idx];
		// 이번 재료 사용함 ,다음 재료 판단
		recursion(idx + 1, selIdx + 1);

		// 이번 재료 사용하지 않음, 다음 재료 판단
		recursion(idx + 1, selIdx);

	}

}
