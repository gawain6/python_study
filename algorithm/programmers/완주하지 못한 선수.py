# 풀이 1
# def solution(participant, completion):
#     completion.append('unkonwn')
    
#     for p_name, c_name in zip(sorted(participant), sorted(completion)):
#         if p_name != c_name:
#             return (p_name)
    
# 풀이 2
import collections

def solution(participant, completion):
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]
    
if __name__ == "__main__":
    participant = ['mislav', 'stanko', 'mislav', 'ana']
    completion = ['stanko', 'ana', 'mislav']
    
    print(solution(participant, completion))