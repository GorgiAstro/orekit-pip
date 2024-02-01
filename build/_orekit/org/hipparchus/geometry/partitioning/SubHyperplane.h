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
            mid_copySelf_24c5633e830ec593,
            mid_getHyperplane_e081ba7b06e71434,
            mid_getSize_9981f74b2d109da6,
            mid_isEmpty_eee3de00fe971136,
            mid_reunite_f2a90cc714d34154,
            mid_split_b587049e19682418,
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
