#ifndef org_orekit_gnss_rflink_gps_SubFrameAlmanac_H
#define org_orekit_gnss_rflink_gps_SubFrameAlmanac_H

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

          class SubFrameAlmanac : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getAF0_b74f83833fdad017,
              mid_getAF1_b74f83833fdad017,
              mid_getDeltai_b74f83833fdad017,
              mid_getE_b74f83833fdad017,
              mid_getLowercaseOmega_b74f83833fdad017,
              mid_getM0_b74f83833fdad017,
              mid_getOmegaDot_b74f83833fdad017,
              mid_getPRN_55546ef6a647f39b,
              mid_getSqrtA_b74f83833fdad017,
              mid_getSvHealth_55546ef6a647f39b,
              mid_getToaA_55546ef6a647f39b,
              mid_getUppercaseOmega0_b74f83833fdad017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrameAlmanac(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrameAlmanac(const SubFrameAlmanac& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            jdouble getAF0() const;
            jdouble getAF1() const;
            jdouble getDeltai() const;
            jdouble getE() const;
            jdouble getLowercaseOmega() const;
            jdouble getM0() const;
            jdouble getOmegaDot() const;
            jint getPRN() const;
            jdouble getSqrtA() const;
            jint getSvHealth() const;
            jint getToaA() const;
            jdouble getUppercaseOmega0() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrameAlmanac);
          extern PyTypeObject *PY_TYPE(SubFrameAlmanac);

          class t_SubFrameAlmanac {
          public:
            PyObject_HEAD
            SubFrameAlmanac object;
            static PyObject *wrap_Object(const SubFrameAlmanac&);
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
