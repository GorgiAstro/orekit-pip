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
                mid_init$_0fa09c18fee449d5,
                mid_getDate_85703d13e302437e,
                mid_getEpochToc_85703d13e302437e,
                mid_getHealth_dff5885c2c873297,
                mid_getPRN_570ce0828f81a2c1,
                mid_getX_dff5885c2c873297,
                mid_getXDot_dff5885c2c873297,
                mid_getXDotDot_dff5885c2c873297,
                mid_getY_dff5885c2c873297,
                mid_getYDot_dff5885c2c873297,
                mid_getYDotDot_dff5885c2c873297,
                mid_getZ_dff5885c2c873297,
                mid_getZDot_dff5885c2c873297,
                mid_getZDotDot_dff5885c2c873297,
                mid_setDate_600a2a61652bc473,
                mid_setEpochToc_600a2a61652bc473,
                mid_setHealth_17db3a65980d3441,
                mid_setPRN_99803b0791f320ff,
                mid_setX_17db3a65980d3441,
                mid_setXDot_17db3a65980d3441,
                mid_setXDotDot_17db3a65980d3441,
                mid_setY_17db3a65980d3441,
                mid_setYDot_17db3a65980d3441,
                mid_setYDotDot_17db3a65980d3441,
                mid_setZ_17db3a65980d3441,
                mid_setZDot_17db3a65980d3441,
                mid_setZDotDot_17db3a65980d3441,
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
