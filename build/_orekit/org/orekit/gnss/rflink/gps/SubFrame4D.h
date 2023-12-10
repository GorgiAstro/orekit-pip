#ifndef org_orekit_gnss_rflink_gps_SubFrame4D_H
#define org_orekit_gnss_rflink_gps_SubFrame4D_H

#include "org/orekit/gnss/rflink/gps/SubFrame45.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          class SubFrame4D : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getA0_dff5885c2c873297,
              mid_getA1_dff5885c2c873297,
              mid_getAlpha0_dff5885c2c873297,
              mid_getAlpha1_dff5885c2c873297,
              mid_getAlpha2_dff5885c2c873297,
              mid_getAlpha3_dff5885c2c873297,
              mid_getBeta0_dff5885c2c873297,
              mid_getBeta1_dff5885c2c873297,
              mid_getBeta2_dff5885c2c873297,
              mid_getBeta3_dff5885c2c873297,
              mid_getDeltaTLs_570ce0828f81a2c1,
              mid_getDeltaTLsf_570ce0828f81a2c1,
              mid_getDn_570ce0828f81a2c1,
              mid_getReserved10_570ce0828f81a2c1,
              mid_getTot_570ce0828f81a2c1,
              mid_getWeekNumberLsf_570ce0828f81a2c1,
              mid_getWeekNumberT_570ce0828f81a2c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4D(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4D(const SubFrame4D& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            jdouble getA0() const;
            jdouble getA1() const;
            jdouble getAlpha0() const;
            jdouble getAlpha1() const;
            jdouble getAlpha2() const;
            jdouble getAlpha3() const;
            jdouble getBeta0() const;
            jdouble getBeta1() const;
            jdouble getBeta2() const;
            jdouble getBeta3() const;
            jint getDeltaTLs() const;
            jint getDeltaTLsf() const;
            jint getDn() const;
            jint getReserved10() const;
            jint getTot() const;
            jint getWeekNumberLsf() const;
            jint getWeekNumberT() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          extern PyType_Def PY_TYPE_DEF(SubFrame4D);
          extern PyTypeObject *PY_TYPE(SubFrame4D);

          class t_SubFrame4D {
          public:
            PyObject_HEAD
            SubFrame4D object;
            static PyObject *wrap_Object(const SubFrame4D&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
