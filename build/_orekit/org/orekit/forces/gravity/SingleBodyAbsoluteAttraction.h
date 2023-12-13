#ifndef org_orekit_forces_gravity_SingleBodyAbsoluteAttraction_H
#define org_orekit_forces_gravity_SingleBodyAbsoluteAttraction_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
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

        class SingleBodyAbsoluteAttraction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b5b078eb816ea0c4,
            mid_acceleration_20bded0292328743,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SingleBodyAbsoluteAttraction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SingleBodyAbsoluteAttraction(const SingleBodyAbsoluteAttraction& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *ATTRACTION_COEFFICIENT_SUFFIX;

          SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::List getParametersDrivers() const;
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
        extern PyType_Def PY_TYPE_DEF(SingleBodyAbsoluteAttraction);
        extern PyTypeObject *PY_TYPE(SingleBodyAbsoluteAttraction);

        class t_SingleBodyAbsoluteAttraction {
        public:
          PyObject_HEAD
          SingleBodyAbsoluteAttraction object;
          static PyObject *wrap_Object(const SingleBodyAbsoluteAttraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
