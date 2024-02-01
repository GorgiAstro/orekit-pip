#ifndef org_orekit_forces_radiation_PythonRadiationSensitive_H
#define org_orekit_forces_radiation_PythonRadiationSensitive_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class PythonRadiationSensitive : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getRadiationParametersDrivers_d751c1a57012b438,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_radiationPressureAcceleration_b5d2cc91db5ad4cb,
            mid_radiationPressureAcceleration_8ba97ba2fcb659fc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonRadiationSensitive(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonRadiationSensitive(const PythonRadiationSensitive& obj) : ::java::lang::Object(obj) {}

          PythonRadiationSensitive();

          void finalize() const;
          ::java::util::List getRadiationParametersDrivers() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        extern PyType_Def PY_TYPE_DEF(PythonRadiationSensitive);
        extern PyTypeObject *PY_TYPE(PythonRadiationSensitive);

        class t_PythonRadiationSensitive {
        public:
          PyObject_HEAD
          PythonRadiationSensitive object;
          static PyObject *wrap_Object(const PythonRadiationSensitive&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
