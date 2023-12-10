#ifndef org_orekit_forces_radiation_IsotropicRadiationSingleCoefficient_H
#define org_orekit_forces_radiation_IsotropicRadiationSingleCoefficient_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class IsotropicRadiationSingleCoefficient : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1d715fa3b7b756e1,
            mid_init$_667a7965403ed91a,
            mid_getRadiationParametersDrivers_a6156df500549a58,
            mid_radiationPressureAcceleration_5efc9e86ed57c6dd,
            mid_radiationPressureAcceleration_397d87bcad93c626,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IsotropicRadiationSingleCoefficient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IsotropicRadiationSingleCoefficient(const IsotropicRadiationSingleCoefficient& obj) : ::java::lang::Object(obj) {}

          IsotropicRadiationSingleCoefficient(jdouble, jdouble);
          IsotropicRadiationSingleCoefficient(jdouble, jdouble, jdouble, jdouble);

          ::java::util::List getRadiationParametersDrivers() const;
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
        extern PyType_Def PY_TYPE_DEF(IsotropicRadiationSingleCoefficient);
        extern PyTypeObject *PY_TYPE(IsotropicRadiationSingleCoefficient);

        class t_IsotropicRadiationSingleCoefficient {
        public:
          PyObject_HEAD
          IsotropicRadiationSingleCoefficient object;
          static PyObject *wrap_Object(const IsotropicRadiationSingleCoefficient&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif