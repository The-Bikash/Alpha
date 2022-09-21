//#include <person.hpp>
//#include <array>
//
//
//graph public_key; // Global Variable
//
//inline polynomial<integer> random_polynomial(const _Sz var_count) {
//
//	dynamic_array<std::string> var_array(var_count);
//
//	std::string* var_array_ptr = var_array.data();
//
//	for (_Sz i = 0; i < var_count; ++i)
//	{
//		*(var_array_ptr + i) = "x" + std::to_string(i);
//	}
//
//	std::list<std::pair<integer, dynamic_array<_Sz>>> node_list;
//
//	for (_Sz i = 0; i < var_count; ++i)
//	{
//		node_list.emplace_back(random_integer(20), random_int(1, 9, var_count));
//	}
//
//	node_list.emplace_back(random_integer(200), random_int(0, 0, var_count));
//
//	return polynomial(node_list, var_array);
//}
//
//void CalculateB1(dynamic_array<polynomial<integer>>& B1, const dynamic_array<std::string>& var_vec) 
//{
//	/*************************** Initialise B1 = {tv,1 + tv,2 + tv,3 - 1 : V E V} ************************************/
//
//	dynamic_array<_Sz> expo(3ll * N, 0);
//
//	std::list<std::pair<integer, dynamic_array<_Sz>>> pair_list;
//
//	for (_Sz i = 0ll; i < N; ++i)
//	{
//		expo[i * 3 + 0] = 1ll;
//
//		pair_list.emplace_back(1l, expo);
//
//		expo[i * 3 + 0] = 0ll;
//		
//
//		expo[i * 3 + 1] = 1ll;
//
//		pair_list.emplace_back(1ll, expo);
//
//		expo[i * 3 + 1] = 0ll;
//
//
//		expo[i * 3 + 2] = 1ll;
//
//		pair_list.emplace_back(1ll, expo);
//
//		expo[i * 3 + 2] = 0ll;
//
//
//		pair_list.emplace_back(-1ll, expo);
//
//
//		B1.emplace_back(pair_list, var_vec);
//
//		pair_list.clear();
//	}
//}
//
//void CalculateB2(dynamic_array<polynomial<integer>>& B2, const dynamic_array<std::string>& var_vec)
//{
//
//	/*************************** Initialise B2 = {tv,itv,j : v E V, 1 <= i < j <= 3} ********************************/
//
//	dynamic_array<_Sz> exponent(3ll * N, 0);
//
//	for (_Sz i = 0; i < N; ++i)
//	{
//		// For the polynomial tv,1tv,2
//
//		exponent[i * 3 + 1 - 1] = 1ll;
//		exponent[i * 3 + 2 - 1] = 1ll;
//
//		B2.emplace_back(1ll, exponent, var_vec);
//
//		exponent[i * 3 + 1 - 1] = 0ll;
//		exponent[i * 3 + 2 - 1] = 0ll;
//
//		// For the polynomial tv,2tv,3
//
//		exponent[i * 3 + 2 - 1] = 1ll;
//		exponent[i * 3 + 3 - 1] = 1ll;
//
//		B2.emplace_back(1ll, exponent, var_vec);
//
//		exponent[i * 3 + 2 - 1] = 0ll;
//		exponent[i * 3 + 3 - 1] = 0ll;
//
//		// For the polynomial tv,1tv,3
//
//		exponent[i * 3 + 1 - 1] = 1ll;
//		exponent[i * 3 + 3 - 1] = 1ll;
//
//		B2.emplace_back(1ll, exponent, var_vec);
//
//		exponent[i * 3 + 1 - 1] = 0ll;
//		exponent[i * 3 + 3 - 1] = 0ll;
//
//	}
//}
//
//void CalculateB3(dynamic_array<polynomial<integer>>& B3, const dynamic_array<std::string>& var_vec)
//{
//
//	/*************************** Initialise B3 = {tu,itv,i : uv E E, 1 <= i <= 3} ***********************************/
//
//	dynamic_array<std::pair<_Sz, _Sz>> E = public_key.edge_list();
//
//	_Sz M = E.size();
//
//	dynamic_array<_Sz> exponent(var_vec.size(), 0);
//
//	for (_Sz i = 0; i < M; ++i)
//	{
//
//		// For the polynomial tu,1tv,1
//
//		exponent[E[i].first  * 3 + 1 - 1] = 1;
//
//		exponent[E[i].second * 3 + 1 - 1] = 1;
//		
//		B3.emplace_back(1ll, exponent, var_vec);
//
//		exponent[E[i].first  * 3 + 1 - 1] = 0;
//
//		exponent[E[i].second * 3 + 1 - 1] = 0;
//
//		//For the polynomial tu,2tv,2
//
//		exponent[E[i].first  * 3 + 2 - 1] = 1;
//
//		exponent[E[i].second * 3 + 2 - 1] = 1;
//
//		B3.emplace_back(1ll, exponent, var_vec);
//
//		exponent[E[i].first  * 3 + 2 - 1] = 0;
//
//		exponent[E[i].second * 3 + 2 - 1] = 0;
//
//		// For the polynomial tu,3tv,3
//
//		exponent[E[i].first  * 3 + 3 - 1] = 1;
//
//		exponent[E[i].second * 3 + 3 - 1] = 1;
//
//		B3.emplace_back(1ll, exponent, var_vec);
//
//		exponent[E[i].first  * 3 + 3 - 1] = 0;
//
//		exponent[E[i].second * 3 + 3 - 1] = 0;
//
//	}
//
//}
//
//int main()
//{
//	/*{
//		std::ofstream public_file("public_key.txt");
//		std::ofstream private_file("private_key.txt");
//		if (public_file.is_open()) std::cout << "open";
//		person Alice(private_file, public_file);
//	}*/
//	
//	/*std::ifstream public_file("public_key.txt");
//	std::ifstream private_file("private_key.txt");
//
//	person Alice(private_file, public_file);*/
//
//	person Alice;
//
//	public_key = Alice.public_key();
//
//	_Sz M = public_key.edge_count();
//
//	std::string message;  input(message);
//
//	integer message_num = ConvertMessageToInteger(message);
//
//	dynamic_array<polynomial<integer>> B1; B1.reserve(1 * N);
//	dynamic_array<polynomial<integer>> B2; B2.reserve(3 * N);
//	dynamic_array<polynomial<integer>> B3; B3.reserve(3 * M);
//
//	dynamic_array<std::string> var = var_vec(N);
//
//	CalculateB1(B1, var);
//	CalculateB2(B2, var);
//	CalculateB3(B3, var);
//
//
//	polynomial<integer> sum_pol1 = { 0ll, var };
//	polynomial<integer> sum_pol2 = { 0ll, var };
//	polynomial<integer> sum_pol3 = { 0ll, var };
//
//	for (_Sz i = 0; i < N; ++i)
//	{
//		sum_pol1 += B1[i];
//	}
//
//	for (_Sz i = 0; i < 3 * N; ++i)
//	{
//		sum_pol2 += B2[i];
//	}
//
//	for (_Sz i = 0; i < M; ++i)
//	{
//		sum_pol3 += B3[i];
//	}
//
//
//	polynomial<integer> cipher_text =
//		sum_pol1 +
//		sum_pol2 +
//		sum_pol3 + polynomial<integer>(message_num, var);
//
//	{
//		std::ofstream file("cipher_text.txt");
//		file << cipher_text;
//	}
//
//	polynomial<integer> cipher_text_new;
//
//	{
//		std::ifstream file("cipher_text.txt");
//		file >> cipher_text_new;
//	}
//
//	std::itostr_helper1 << "Cipher Text" << cipher_text_new<<"\n\n";
//
//	std::itostr_helper1 << Alice.message(cipher_text_new);
//
//	std::cin.get();
//
//	return false;
//
//}
//
