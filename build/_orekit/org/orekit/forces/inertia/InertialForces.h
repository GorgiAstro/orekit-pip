#ifndef org_orekit_forces_inertia_InertialForces_H
#define org_orekit_forces_inertia_InertialForces_H

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
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace forces {
      class ForceModel;
    }
    namespace frames {
      class Frame;
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
      namespace inertia {

        class InertialForces : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9725b246c9e25f68,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getParametersDrivers_d751c1a57012b438,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InertialForces(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InertialForces(const InertialForces& obj) : ::java::lang::Object(obj) {}

          InertialForces(const ::org::orekit::frames::Frame &);

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
      namespace inertia {
        extern PyType_Def PY_TYPE_DEF(InertialForces);
        extern PyTypeObject *PY_TYPE(InertialForces);

        class t_InertialForces {
        public:
          PyObject_HEAD
          InertialForces object;
          static PyObject *wrap_Object(const InertialForces&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
