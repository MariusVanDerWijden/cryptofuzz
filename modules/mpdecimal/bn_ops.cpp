#include <cryptofuzz/util.h>
#include <cryptofuzz/repository.h>
#include <fuzzing/datasource/id.hpp>

#include "bn_ops.h"

namespace cryptofuzz {
namespace module {
namespace mpdecimal_bignum {

bool Add::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qadd(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Sub::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qsub(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Mul::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qmul(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Div::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qdiv(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Abs::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qabs(res.GetPtr(), bn[0].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool And::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qand(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Or::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qor(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Xor::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qxor(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

bool Cmp::Run(Datasource& ds, Bignum& res, std::vector<Bignum>& bn, mpd_context_t* ctx) const {
    (void)ds;

    bool ret = false;
    uint32_t status = 0;

    mpd_qcompare(res.GetPtr(), bn[0].GetPtr(), bn[1].GetPtr(), ctx, &status);

    CF_CHECK_EQ(status, 0);
    ret = true;

end:
    return ret;
}

} /* namespace mpdecimal_bignum */
} /* namespace module */
} /* namespace cryptofuzz */
