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
        class LOSBuilder;
        class TimeIndependentLOSTransform;
        class LOSTransform;
        class TimeDependentLOS;
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
            mid_init$_65de9727799c5641,
            mid_addTransform_f58a6a5347aa00ee,
            mid_addTransform_dfab487c660c16fb,
            mid_build_8a21357b2bb198c8,
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
