#ifndef org_orekit_forces_gravity_OceanTides_H
#define org_orekit_forces_gravity_OceanTides_H

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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class UT1Scale;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class IERSConventions;
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
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

        class OceanTides : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7c496bbae0cbf081,
            mid_init$_e9264073f6526404,
            mid_init$_ab7510ef7b894b24,
            mid_acceleration_00aba28d3abe9a8c,
            mid_acceleration_78989e44b99f7cc2,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OceanTides(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OceanTides(const OceanTides& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_POINTS;
          static jdouble DEFAULT_STEP;

          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &);
          OceanTides(const ::org::orekit::frames::Frame &, jdouble, jdouble, jboolean, jdouble, jint, jint, jint, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::UT1Scale &, const ::org::orekit::forces::gravity::potential::GravityFields &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
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
        extern PyType_Def PY_TYPE_DEF(OceanTides);
        extern PyTypeObject *PY_TYPE(OceanTides);

        class t_OceanTides {
        public:
          PyObject_HEAD
          OceanTides object;
          static PyObject *wrap_Object(const OceanTides&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
