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
              mid_getAODO_570ce0828f81a2c1,
              mid_getCrs_dff5885c2c873297,
              mid_getCuc_dff5885c2c873297,
              mid_getCus_dff5885c2c873297,
              mid_getDeltaN_dff5885c2c873297,
              mid_getE_dff5885c2c873297,
              mid_getFitInterval_570ce0828f81a2c1,
              mid_getIODE_570ce0828f81a2c1,
              mid_getM0_dff5885c2c873297,
              mid_getSqrtA_dff5885c2c873297,
              mid_getToe_570ce0828f81a2c1,
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
