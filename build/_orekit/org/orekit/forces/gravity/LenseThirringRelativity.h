#ifndef org_orekit_forces_gravity_LenseThirringRelativity_H
#define org_orekit_forces_gravity_LenseThirringRelativity_H

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
    namespace frames {
      class Frame;
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
      namespace gravity {

        class LenseThirringRelativity : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4c11e89002512e6b,
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

          explicit LenseThirringRelativity(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LenseThirringRelativity(const LenseThirringRelativity& obj) : ::java::lang::Object(obj) {}

          LenseThirringRelativity(jdouble, const ::org::orekit::frames::Frame &);

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
        extern PyType_Def PY_TYPE_DEF(LenseThirringRelativity);
        extern PyTypeObject *PY_TYPE(LenseThirringRelativity);

        class t_LenseThirringRelativity {
        public:
          PyObject_HEAD
          LenseThirringRelativity object;
          static PyObject *wrap_Object(const LenseThirringRelativity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
