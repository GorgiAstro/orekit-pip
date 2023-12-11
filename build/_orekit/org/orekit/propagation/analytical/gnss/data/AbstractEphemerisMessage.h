#ifndef org_orekit_propagation_analytical_gnss_data_AbstractEphemerisMessage_H
#define org_orekit_propagation_analytical_gnss_data_AbstractEphemerisMessage_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
                mid_init$_0640e6acf969ed28,
                mid_getDate_7a97f7e149e79afb,
                mid_getEpochToc_7a97f7e149e79afb,
                mid_getHealth_557b8123390d8d0c,
                mid_getPRN_412668abc8d889e9,
                mid_getX_557b8123390d8d0c,
                mid_getXDot_557b8123390d8d0c,
                mid_getXDotDot_557b8123390d8d0c,
                mid_getY_557b8123390d8d0c,
                mid_getYDot_557b8123390d8d0c,
                mid_getYDotDot_557b8123390d8d0c,
                mid_getZ_557b8123390d8d0c,
                mid_getZDot_557b8123390d8d0c,
                mid_getZDotDot_557b8123390d8d0c,
                mid_setDate_20affcbd28542333,
                mid_setEpochToc_20affcbd28542333,
                mid_setHealth_10f281d777284cea,
                mid_setPRN_a3da1a935cb37f7b,
                mid_setX_10f281d777284cea,
                mid_setXDot_10f281d777284cea,
                mid_setXDotDot_10f281d777284cea,
                mid_setY_10f281d777284cea,
                mid_setYDot_10f281d777284cea,
                mid_setYDotDot_10f281d777284cea,
                mid_setZ_10f281d777284cea,
                mid_setZDot_10f281d777284cea,
                mid_setZDotDot_10f281d777284cea,
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
