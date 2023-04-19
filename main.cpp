#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b)
{
  return a.second < b.second;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int p, n; //�H��, ���
  cin >> p >> n;
  int csize = n; //�̦h�n�]�X��(�}�C�j�p)
  int c[100005] = {0}; //�ĴX�H�ĴX������]�����
  double a[1005]; //�C�H�����
  for(int i = 0; i < p; i++) cin >> a[i];
  double ans = 0; //�`���
  pair<int, double> s[100005]; //�ĴX�H�ĴX��, �����������

  for(int i = 0; i < n; i++)
  {
    s[i].first = i;
    s[i].second = a[i%p] * pow(1.2, i/p);
  } //����X�C�H�C��Ĥ@�骺���

  for(int i = 0; i < p; i++)
  {
    ans += a[i];
    s[i].second *= 1.1; //�Ĥ@�볣�]�L�@��F�A���*1.1
    c[i]++;
  } //�C�H�Ĥ@�몺�Ĥ@����[�W�h
  n -= p;

  while(n > 0)
  {
    sort(s, s + csize, cmp); //��X�̤p���

    int tmp = 0; //�����o���̨θѪ��s��
    bool v = 0; //�����o�ӸѬO�_�X�z
    while(v == 0) //�p�G���X�N�~���U�@�Ӹ�
    {
      if(s[tmp].first >= p && (c[s[tmp].first-1]) == 0)
        tmp++; //�s��+1�A��U�@�ӳ̨θ�
      else v = 1;
    }

    ans += s[tmp].second; //�`��ƥ[�W�h
    c[s[tmp].first]++; //�o�@�몺���+1
    s[tmp].second *= 1.1; //�o��h�]�F�@��A��ƭ��W�h
    n--; //�٭n�B�z�����-1
  }

  for(int i = 0; i < csize; i++)
    if(c[i]) cout << c[i] << " ";
  cout << ans << endl;

  return 0;
}
