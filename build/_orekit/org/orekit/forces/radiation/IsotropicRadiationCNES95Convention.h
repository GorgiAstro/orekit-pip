#ifndef org_orekit_forces_radiation_IsotropicRadiationCNES95Convention_H
#define org_orekit_forces_radiation_IsotropicRadiationCNES95Convention_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class IsotropicRadiationCNES95Convention : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2c56b6dd4d4b1dec,
            mid_getRadiationParametersDrivers_2afa36052df4765d,
            mid_radiationPressureAcceleration_c01594a6748cab78,
            mid_radiationPressureAcceleration_70d4c57af2df1a86,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IsotropicRadiationCNES95Convention(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IsotropicRadiationCNES95Convention(const IsotropicRadiationCNES95Convention& obj) : ::java::lang::Object(obj) {}

          IsotropicRadiationCNES95Convention(jdouble, jdouble, jdouble);

          ::java::util::List getRadiationParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IsotropicRadiationCNES95Convention);
        extern PyTypeObject *PY_TYPE(IsotropicRadiationCNES95Convention);

        class t_IsotropicRadiationCNES95Convention {
        public:
          PyObject_HEAD
          IsotropicRadiationCNES95Convention object;
          static PyObject *wrap_Object(const IsotropicRadiationCNES95Convention&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
