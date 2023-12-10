#ifndef org_orekit_propagation_analytical_gnss_data_AbstractEphemerisMessage_H
#define org_orekit_propagation_analytical_gnss_data_AbstractEphemerisMessage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class AbstractEphemerisMessage : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getDate_aaa854c403487cf3,
                mid_getEpochToc_aaa854c403487cf3,
                mid_getHealth_456d9a2f64d6b28d,
                mid_getPRN_f2f64475e4580546,
                mid_getX_456d9a2f64d6b28d,
                mid_getXDot_456d9a2f64d6b28d,
                mid_getXDotDot_456d9a2f64d6b28d,
                mid_getY_456d9a2f64d6b28d,
                mid_getYDot_456d9a2f64d6b28d,
                mid_getYDotDot_456d9a2f64d6b28d,
                mid_getZ_456d9a2f64d6b28d,
                mid_getZDot_456d9a2f64d6b28d,
                mid_getZDotDot_456d9a2f64d6b28d,
                mid_setDate_e82d68cd9f886886,
                mid_setEpochToc_e82d68cd9f886886,
                mid_setHealth_77e0f9a1f260e2e5,
                mid_setPRN_0a2a1ac2721c0336,
                mid_setX_77e0f9a1f260e2e5,
                mid_setXDot_77e0f9a1f260e2e5,
                mid_setXDotDot_77e0f9a1f260e2e5,
                mid_setY_77e0f9a1f260e2e5,
                mid_setYDot_77e0f9a1f260e2e5,
                mid_setYDotDot_77e0f9a1f260e2e5,
                mid_setZ_77e0f9a1f260e2e5,
                mid_setZDot_77e0f9a1f260e2e5,
                mid_setZDotDot_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractEphemerisMessage(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractEphemerisMessage(const AbstractEphemerisMessage& obj) : ::java::lang::Object(obj) {}

              AbstractEphemerisMessage();

              ::org::orekit::time::AbsoluteDate getDate() const;
              ::org::orekit::time::AbsoluteDate getEpochToc() const;
              jdouble getHealth() const;
              jint getPRN() const;
              jdouble getX() const;
              jdouble getXDot() const;
              jdouble getXDotDot() const;
              jdouble getY() const;
              jdouble getYDot() const;
              jdouble getYDotDot() const;
              jdouble getZ() const;
              jdouble getZDot() const;
              jdouble getZDotDot() const;
              void setDate(const ::org::orekit::time::AbsoluteDate &) const;
              void setEpochToc(const ::org::orekit::time::AbsoluteDate &) const;
              void setHealth(jdouble) const;
              void setPRN(jint) const;
              void setX(jdouble) const;
              void setXDot(jdouble) const;
              void setXDotDot(jdouble) const;
              void setY(jdouble) const;
              void setYDot(jdouble) const;
              void setYDotDot(jdouble) const;
              void setZ(jdouble) const;
              void setZDot(jdouble) const;
              void setZDotDot(jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(AbstractEphemerisMessage);
            extern PyTypeObject *PY_TYPE(AbstractEphemerisMessage);

            class t_AbstractEphemerisMessage {
            public:
              PyObject_HEAD
              AbstractEphemerisMessage object;
              static PyObject *wrap_Object(const AbstractEphemerisMessage&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
