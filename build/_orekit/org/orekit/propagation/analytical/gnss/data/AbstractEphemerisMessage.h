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
                mid_init$_ff7cb6c242604316,
                mid_getDate_80e11148db499dda,
                mid_getEpochToc_80e11148db499dda,
                mid_getHealth_9981f74b2d109da6,
                mid_getPRN_d6ab429752e7c267,
                mid_getX_9981f74b2d109da6,
                mid_getXDot_9981f74b2d109da6,
                mid_getXDotDot_9981f74b2d109da6,
                mid_getY_9981f74b2d109da6,
                mid_getYDot_9981f74b2d109da6,
                mid_getYDotDot_9981f74b2d109da6,
                mid_getZ_9981f74b2d109da6,
                mid_getZDot_9981f74b2d109da6,
                mid_getZDotDot_9981f74b2d109da6,
                mid_setDate_8497861b879c83f7,
                mid_setEpochToc_8497861b879c83f7,
                mid_setHealth_1ad26e8c8c0cd65b,
                mid_setPRN_8fd427ab23829bf5,
                mid_setX_1ad26e8c8c0cd65b,
                mid_setXDot_1ad26e8c8c0cd65b,
                mid_setXDotDot_1ad26e8c8c0cd65b,
                mid_setY_1ad26e8c8c0cd65b,
                mid_setYDot_1ad26e8c8c0cd65b,
                mid_setYDotDot_1ad26e8c8c0cd65b,
                mid_setZ_1ad26e8c8c0cd65b,
                mid_setZDot_1ad26e8c8c0cd65b,
                mid_setZDotDot_1ad26e8c8c0cd65b,
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
