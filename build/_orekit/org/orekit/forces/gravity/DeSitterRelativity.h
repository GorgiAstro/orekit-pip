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
    namespace bodies {
      class CelestialBody;
    }
    namespace forces {
      class ForceModel;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_6a627f83556e9294,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getEarth_a1474f5cfab89b5e,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getSun_a1474f5cfab89b5e,
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
