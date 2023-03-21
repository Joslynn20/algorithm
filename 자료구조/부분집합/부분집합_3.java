package 부분집합;

public class 부분집합_3 {

	static String[] 재료 = { "참치", "우엉", "삼겹살" };
	static int N;
	// 선택 여부 저장
	static boolean[] sel;

	// 재귀함수 이용
	public static void main(String[] args) {
		N = 3;
		sel = new boolean[N];

		powerset(0);
	}

	// idx : 해당 원소를 포함할지 안할지를 결정
	public static void powerset(int idx) {
		// 기저조건 : 재귀를 빠져나갈 수 있는 조건
		if (idx == N) {

			String temp = "";
			for (int i = 0; i < N; i++) {
				if (sel[i])
					temp += 재료[i];
			}

			System.out.println(temp);
			return;
		}

		// recursive : 나 자신을 다시 호출하는 조건
		// idx번째 재료를 사용
		sel[idx] = true;
		// 다음 재료 고려
		powerset(idx + 1);

		// idx번째 재료를 사용하지 않음
		sel[idx] = false;
		// 다음 재료 고려
		powerset(idx + 1);
	}

}
