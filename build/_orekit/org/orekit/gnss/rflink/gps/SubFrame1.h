#ifndef org_orekit_gnss_rflink_gps_SubFrame1_H
#define org_orekit_gnss_rflink_gps_SubFrame1_H

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

          class SubFrame1 : public ::org::orekit::gnss::rflink::gps::SubFrame {
           public:
            enum {
              mid_getAF0_456d9a2f64d6b28d,
              mid_getAF1_456d9a2f64d6b28d,
              mid_getAF2_456d9a2f64d6b28d,
              mid_getCaOrPFlag_f2f64475e4580546,
              mid_getIODC_f2f64475e4580546,
              mid_getL2PDataFlag_f2f64475e4580546,
              mid_getReserved04_f2f64475e4580546,
              mid_getReserved05_f2f64475e4580546,
              mid_getReserved06_f2f64475e4580546,
              mid_getReserved07_f2f64475e4580546,
              mid_getSvHealth_f2f64475e4580546,
              mid_getTGD_f2f64475e4580546,
              mid_getTOC_f2f64475e4580546,
              mid_getUraIndex_f2f64475e4580546,
              mid_getWeekNumber_f2f64475e4580546,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame1(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame1(const SubFrame1& obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {}

            jdouble getAF0() const;
            jdouble getAF1() const;
            jdouble getAF2() const;
            jint getCaOrPFlag() const;
            jint getIODC() const;
            jint getL2PDataFlag() const;
            jint getReserved04() const;
            jint getReserved05() const;
            jint getReserved06() const;
            jint getReserved07() const;
            jint getSvHealth() const;
            jint getTGD() const;
            jint getTOC() const;
            jint getUraIndex() const;
            jint getWeekNumber() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame1);
          extern PyTypeObject *PY_TYPE(SubFrame1);

          class t_SubFrame1 {
          public:
            PyObject_HEAD
            SubFrame1 object;
            static PyObject *wrap_Object(const SubFrame1&);
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
