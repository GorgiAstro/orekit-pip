#ifndef org_orekit_propagation_analytical_tle_FieldDeepSDP4_H
#define org_orekit_propagation_analytical_tle_FieldDeepSDP4_H

#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
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

          class FieldDeepSDP4 : public ::org::orekit::propagation::analytical::tle::FieldSDP4 {
           public:
            enum {
              mid_init$_dee9d0fe004a8f9d,
              mid_init$_5151ab0d47c2b93c,
              mid_luniSolarTermsComputation_0fa09c18fee449d5,
              mid_deepSecularEffects_072c8635f2164db9,
              mid_deepPeriodicEffects_072c8635f2164db9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldDeepSDP4(jobject obj) : ::org::orekit::propagation::analytical::tle::FieldSDP4(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldDeepSDP4(const FieldDeepSDP4& obj) : ::org::orekit::propagation::analytical::tle::FieldSDP4(obj) {}

            FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
            FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
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
          extern PyType_Def PY_TYPE_DEF(FieldDeepSDP4);
          extern PyTypeObject *PY_TYPE(FieldDeepSDP4);

          class t_FieldDeepSDP4 {
          public:
            PyObject_HEAD
            FieldDeepSDP4 object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldDeepSDP4 *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldDeepSDP4&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldDeepSDP4&, PyTypeObject *);
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
