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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getDate_c325492395d89b24,
                mid_getEpochToc_c325492395d89b24,
                mid_getHealth_b74f83833fdad017,
                mid_getPRN_55546ef6a647f39b,
                mid_getX_b74f83833fdad017,
                mid_getXDot_b74f83833fdad017,
                mid_getXDotDot_b74f83833fdad017,
                mid_getY_b74f83833fdad017,
                mid_getYDot_b74f83833fdad017,
                mid_getYDotDot_b74f83833fdad017,
                mid_getZ_b74f83833fdad017,
                mid_getZDot_b74f83833fdad017,
                mid_getZDotDot_b74f83833fdad017,
                mid_setDate_02135a6ef25adb4b,
                mid_setEpochToc_02135a6ef25adb4b,
                mid_setHealth_8ba9fe7a847cecad,
                mid_setPRN_44ed599e93e8a30c,
                mid_setX_8ba9fe7a847cecad,
                mid_setXDot_8ba9fe7a847cecad,
                mid_setXDotDot_8ba9fe7a847cecad,
                mid_setY_8ba9fe7a847cecad,
                mid_setYDot_8ba9fe7a847cecad,
                mid_setYDotDot_8ba9fe7a847cecad,
                mid_setZ_8ba9fe7a847cecad,
                mid_setZDot_8ba9fe7a847cecad,
                mid_setZDotDot_8ba9fe7a847cecad,
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
