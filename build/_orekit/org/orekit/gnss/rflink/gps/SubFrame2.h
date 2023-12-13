#ifndef org_orekit_gnss_rflink_gps_SubFrame2_H
#define org_orekit_gnss_rflink_gps_SubFrame2_H

#include "org/orekit/gnss/rflink/gps/SubFrame.h"

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

          class SubFrame2 : public ::org::orekit::gnss::rflink::gps::SubFrame {
           public:
            enum {
              mid_getAODO_55546ef6a647f39b,
              mid_getCrs_b74f83833fdad017,
              mid_getCuc_b74f83833fdad017,
              mid_getCus_b74f83833fdad017,
              mid_getDeltaN_b74f83833fdad017,
              mid_getE_b74f83833fdad017,
              mid_getFitInterval_55546ef6a647f39b,
              mid_getIODE_55546ef6a647f39b,
              mid_getM0_b74f83833fdad017,
              mid_getSqrtA_b74f83833fdad017,
              mid_getToe_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame2(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame2(const SubFrame2& obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {}

            jint getAODO() const;
            jdouble getCrs() const;
            jdouble getCuc() const;
            jdouble getCus() const;
            jdouble getDeltaN() const;
            jdouble getE() const;
            jint getFitInterval() const;
            jint getIODE() const;
            jdouble getM0() const;
            jdouble getSqrtA() const;
            jint getToe() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame2);
          extern PyTypeObject *PY_TYPE(SubFrame2);

          class t_SubFrame2 {
          public:
            PyObject_HEAD
            SubFrame2 object;
            static PyObject *wrap_Object(const SubFrame2&);
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
