#ifndef org_orekit_forces_radiation_PythonRadiationSensitive_H
#define org_orekit_forces_radiation_PythonRadiationSensitive_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getRadiationParametersDrivers_2afa36052df4765d,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_radiationPressureAcceleration_70d4c57af2df1a86,
            mid_radiationPressureAcceleration_c01594a6748cab78,
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
