#ifndef org_orekit_propagation_analytical_tle_FieldSGP4_H
#define org_orekit_propagation_analytical_tle_FieldSGP4_H

#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLE;
        }
      }
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
        namespace tle {

          class FieldSGP4 : public ::org::orekit::propagation::analytical::tle::FieldTLEPropagator {
           public:
            enum {
              mid_init$_0b9ee8d2f12ae2a8,
              mid_init$_cb79b5ee065880cd,
              mid_sxpInitialize_77e61a645c496adc,
              mid_sxpPropagate_8556964e7b03aae6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldSGP4(jobject obj) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldSGP4(const FieldSGP4& obj) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(obj) {}

            FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
            FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
          };
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
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(FieldSGP4);
          extern PyTypeObject *PY_TYPE(FieldSGP4);

          class t_FieldSGP4 {
          public:
            PyObject_HEAD
            FieldSGP4 object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldSGP4 *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldSGP4&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldSGP4&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
