#ifndef org_orekit_gnss_rflink_gps_SubFrame3_H
#define org_orekit_gnss_rflink_gps_SubFrame3_H

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

          class SubFrame3 : public ::org::orekit::gnss::rflink::gps::SubFrame {
           public:
            enum {
              mid_getCic_b74f83833fdad017,
              mid_getCis_b74f83833fdad017,
              mid_getCrc_b74f83833fdad017,
              mid_getI0_b74f83833fdad017,
              mid_getIDot_b74f83833fdad017,
              mid_getIODE_55546ef6a647f39b,
              mid_getLowercaseOmega_b74f83833fdad017,
              mid_getOmegaDot_b74f83833fdad017,
              mid_getUppercaseOmega0_b74f83833fdad017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame3(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame3(const SubFrame3& obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {}

            jdouble getCic() const;
            jdouble getCis() const;
            jdouble getCrc() const;
            jdouble getI0() const;
            jdouble getIDot() const;
            jint getIODE() const;
            jdouble getLowercaseOmega() const;
            jdouble getOmegaDot() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame3);
          extern PyTypeObject *PY_TYPE(SubFrame3);

          class t_SubFrame3 {
          public:
            PyObject_HEAD
            SubFrame3 object;
            static PyObject *wrap_Object(const SubFrame3&);
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
