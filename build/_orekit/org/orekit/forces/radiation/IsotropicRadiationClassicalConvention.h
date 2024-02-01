#ifndef org_orekit_forces_radiation_IsotropicRadiationClassicalConvention_H
#define org_orekit_forces_radiation_IsotropicRadiationClassicalConvention_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class IsotropicRadiationClassicalConvention : public ::java::lang::Object {
         public:
          enum {
            mid_init$_bd28dc6055dc5bbd,
            mid_getRadiationParametersDrivers_d751c1a57012b438,
            mid_radiationPressureAcceleration_8ba97ba2fcb659fc,
            mid_radiationPressureAcceleration_b5d2cc91db5ad4cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IsotropicRadiationClassicalConvention(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IsotropicRadiationClassicalConvention(const IsotropicRadiationClassicalConvention& obj) : ::java::lang::Object(obj) {}

          IsotropicRadiationClassicalConvention(jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(IsotropicRadiationClassicalConvention);
        extern PyTypeObject *PY_TYPE(IsotropicRadiationClassicalConvention);

        class t_IsotropicRadiationClassicalConvention {
        public:
          PyObject_HEAD
          IsotropicRadiationClassicalConvention object;
          static PyObject *wrap_Object(const IsotropicRadiationClassicalConvention&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
