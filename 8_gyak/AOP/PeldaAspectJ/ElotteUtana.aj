public aspect ElotteUtana {
	public pointcut fgvHivas(): call(void HelloVilag.hello());

	before(): fgvHivas() {
		System.out.println("ElotteUtana> alma");
	}
	after(): fgvHivas() {
		System.out.println("ElotteUtana> korte");
	}
}
