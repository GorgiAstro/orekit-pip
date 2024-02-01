#ifndef org_orekit_rugged_los_TimeIndependentLOSTransform_H
#define org_orekit_rugged_los_TimeIndependentLOSTransform_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
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
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        class TimeIndependentLOSTransform : public ::java::lang::Object {
         public:
          enum {
            mid_getParametersDrivers_11e4ca8182c1933d,
            mid_transformLOS_228f1c415ce966c1,
            mid_transformLOS_abcb5ae819a3f86b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeIndependentLOSTransform(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeIndependentLOSTransform(const TimeIndependentLOSTransform& obj) : ::java::lang::Object(obj) {}

          ::java::util::stream::Stream getParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {
        extern PyType_Def PY_TYPE_DEF(TimeIndependentLOSTransform);
        extern PyTypeObject *PY_TYPE(TimeIndependentLOSTransform);

        class t_TimeIndependentLOSTransform {
        public:
          PyObject_HEAD
          TimeIndependentLOSTransform object;
          static PyObject *wrap_Object(const TimeIndependentLOSTransform&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
