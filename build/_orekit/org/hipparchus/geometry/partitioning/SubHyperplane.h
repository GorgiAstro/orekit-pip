#ifndef org_hipparchus_geometry_partitioning_SubHyperplane_H
#define org_hipparchus_geometry_partitioning_SubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class SubHyperplane;
        class Hyperplane;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class SubHyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_copySelf_0417f9f9ce6ee466,
            mid_getHyperplane_40a20a6ecfa9e745,
            mid_getSize_b74f83833fdad017,
            mid_isEmpty_9ab94ac1dc23b105,
            mid_reunite_263a5980faef7dc3,
            mid_split_30674c36ae2fcf9f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SubHyperplane(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SubHyperplane(const SubHyperplane& obj) : ::java::lang::Object(obj) {}

          SubHyperplane copySelf() const;
          ::org::hipparchus::geometry::partitioning::Hyperplane getHyperplane() const;
          jdouble getSize() const;
          jboolean isEmpty() const;
          SubHyperplane reunite(const SubHyperplane &) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane split(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(SubHyperplane);
        extern PyTypeObject *PY_TYPE(SubHyperplane);

        class t_SubHyperplane {
        public:
          PyObject_HEAD
          SubHyperplane object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SubHyperplane *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SubHyperplane&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SubHyperplane&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
