#ifndef org_orekit_propagation_analytical_tle_PythonFieldSDP4_H
#define org_orekit_propagation_analytical_tle_PythonFieldSDP4_H

#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"

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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class PythonFieldSDP4 : public ::org::orekit::propagation::analytical::tle::FieldSDP4 {
           public:
            enum {
              mid_init$_cb79b5ee065880cd,
              mid_deepPeriodicEffects_f63ca9e3185c722e,
              mid_deepSecularEffects_f63ca9e3185c722e,
              mid_finalize_ff7cb6c242604316,
              mid_luniSolarTermsComputation_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFieldSDP4(jobject obj) : ::org::orekit::propagation::analytical::tle::FieldSDP4(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFieldSDP4(const PythonFieldSDP4& obj) : ::org::orekit::propagation::analytical::tle::FieldSDP4(obj) {}

            PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

            void deepPeriodicEffects(const ::org::hipparchus::CalculusFieldElement &) const;
            void deepSecularEffects(const ::org::hipparchus::CalculusFieldElement &) const;
            void finalize() const;
            void luniSolarTermsComputation() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonFieldSDP4);
          extern PyTypeObject *PY_TYPE(PythonFieldSDP4);

          class t_PythonFieldSDP4 {
          public:
            PyObject_HEAD
            PythonFieldSDP4 object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonFieldSDP4 *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonFieldSDP4&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonFieldSDP4&, PyTypeObject *);
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
