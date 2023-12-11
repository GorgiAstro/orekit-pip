#ifndef org_orekit_forces_gravity_DeSitterRelativity_H
#define org_orekit_forces_gravity_DeSitterRelativity_H

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
    namespace bodies {
      class CelestialBody;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
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
            mid_init$_0640e6acf969ed28,
            mid_init$_9a72c2af019e2130,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getEarth_40e74583267ad550,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getSun_40e74583267ad550,
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
