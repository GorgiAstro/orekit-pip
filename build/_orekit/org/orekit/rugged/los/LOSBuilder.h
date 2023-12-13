#ifndef org_orekit_rugged_los_LOSBuilder_H
#define org_orekit_rugged_los_LOSBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace los {
        class TimeDependentLOS;
        class LOSTransform;
        class LOSBuilder;
        class TimeIndependentLOSTransform;
      }
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
    namespace rugged {
      namespace los {

        class LOSBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0e7c3032c7c93ed3,
            mid_addTransform_8bafb16e6f4ae7cb,
            mid_addTransform_14f0023edd2a075a,
            mid_build_7b422055bdf6ad4c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LOSBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LOSBuilder(const LOSBuilder& obj) : ::java::lang::Object(obj) {}

          LOSBuilder(const ::java::util::List &);

          LOSBuilder addTransform(const ::org::orekit::rugged::los::LOSTransform &) const;
          LOSBuilder addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform &) const;
          ::org::orekit::rugged::los::TimeDependentLOS build() const;
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
        extern PyType_Def PY_TYPE_DEF(LOSBuilder);
        extern PyTypeObject *PY_TYPE(LOSBuilder);

        class t_LOSBuilder {
        public:
          PyObject_HEAD
          LOSBuilder object;
          static PyObject *wrap_Object(const LOSBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
