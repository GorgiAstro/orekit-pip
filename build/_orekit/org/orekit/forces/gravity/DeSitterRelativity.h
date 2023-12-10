#ifndef org_orekit_forces_gravity_DeSitterRelativity_H
#define org_orekit_forces_gravity_DeSitterRelativity_H

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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace bodies {
      class CelestialBody;
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
      namespace gravity {

        class DeSitterRelativity : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_628ee7a3e714b75c,
            mid_acceleration_8954761face5e1a7,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getEarth_624686a38a6b107c,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getSun_624686a38a6b107c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DeSitterRelativity(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DeSitterRelativity(const DeSitterRelativity& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *ATTRACTION_COEFFICIENT_SUFFIX;

          DeSitterRelativity();
          DeSitterRelativity(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jboolean dependsOnPositionOnly() const;
          ::org::orekit::bodies::CelestialBody getEarth() const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::bodies::CelestialBody getSun() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        extern PyType_Def PY_TYPE_DEF(DeSitterRelativity);
        extern PyTypeObject *PY_TYPE(DeSitterRelativity);

        class t_DeSitterRelativity {
        public:
          PyObject_HEAD
          DeSitterRelativity object;
          static PyObject *wrap_Object(const DeSitterRelativity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
