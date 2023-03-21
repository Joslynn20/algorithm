package 부분집합;

public class 부분집합_2 {

	public static void main(String[] args) {
		String[] 재료 = { "참치", "우엉", "삼겹살" };
		// 비트마스킹 이용
		int N = 3;

		// i는 모든 부분 집합을 의미
		// N개의 비트만 필요
		for (int i = 0; i < (1 << N); i++) {
			// i가 부분 집합 중 1개
			// i가 무슨 원소를 가진 부분집합인지 검사 => N개의 비트
			// 해당 자리에 원소가 있는지 없는지 검사 -> & 연산자
			// N개의 원소를 검사
			String temp = "";
			for (int j = 0; j < N; j++) {
				// i의 j번째 비트에 해당 값이 있는지 체크
				if ((i & (1 << j)) > 0) {
					// 해당 j번쨰 요소가 이번 부분집합에 포함
					temp += 재료[j];
				}
			}

			System.out.println(temp);
		}

	}

}
