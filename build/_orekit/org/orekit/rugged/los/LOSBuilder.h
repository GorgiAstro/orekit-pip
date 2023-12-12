#ifndef org_orekit_rugged_los_LOSBuilder_H
#define org_orekit_rugged_los_LOSBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {
        class LOSTransform;
        class TimeDependentLOS;
        class TimeIndependentLOSTransform;
        class LOSBuilder;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
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
            mid_init$_4ccaedadb068bdeb,
            mid_addTransform_231109ffe5c9a348,
            mid_addTransform_5ec13618c44587f1,
            mid_build_f31dbf4c8d33b612,
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
