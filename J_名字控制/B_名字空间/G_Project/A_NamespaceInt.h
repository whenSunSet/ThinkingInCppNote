//
// Created by 何时夕 on 2017/12/31.
//

#ifndef THINKING_IN_C_A_NAMESPACEINT_H
#define THINKING_IN_C_A_NAMESPACEINT_H
namespace Int {
    enum sign {
        positive , negative
    };

    class Integer {
        int i;
        sign s;
    public:
        Integer(int ii = 0) : i(ii) , s(i >= 0 ? positive : negative) {}
        sign getSign() const {
            return s;
        }
        void setSign(sign sng) {
            s = sng;
        }
    };
}

#endif //THINKING_IN_C_A_NAMESPACEINT_H
