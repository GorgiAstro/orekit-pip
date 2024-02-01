#ifndef org_orekit_forces_radiation_RadiationSensitive_H
#define org_orekit_forces_radiation_RadiationSensitive_H

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class RadiationSensitive : public ::java::lang::Object {
         public:
          enum {
            mid_getRadiationParametersDrivers_d751c1a57012b438,
            mid_radiationPressureAcceleration_b5d2cc91db5ad4cb,
            mid_radiationPressureAcceleration_8ba97ba2fcb659fc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RadiationSensitive(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RadiationSensitive(const RadiationSensitive& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *ABSORPTION_COEFFICIENT;
          static ::java::lang::String *GLOBAL_RADIATION_FACTOR;
          static ::java::lang::String *REFLECTION_COEFFICIENT;

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
        extern PyType_Def PY_TYPE_DEF(RadiationSensitive);
        extern PyTypeObject *PY_TYPE(RadiationSensitive);

        class t_RadiationSensitive {
        public:
          PyObject_HEAD
          RadiationSensitive object;
          static PyObject *wrap_Object(const RadiationSensitive&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
