#ifndef org_hipparchus_geometry_partitioning_SubHyperplane$SplitSubHyperplane_H
#define org_hipparchus_geometry_partitioning_SubHyperplane$SplitSubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Side;
        class SubHyperplane;
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

        class SubHyperplane$SplitSubHyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f72ac8c2b00fe7cd,
            mid_getMinus_6e34449919366687,
            mid_getPlus_6e34449919366687,
            mid_getSide_f8858a4ff9f9675f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SubHyperplane$SplitSubHyperplane(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SubHyperplane$SplitSubHyperplane(const SubHyperplane$SplitSubHyperplane& obj) : ::java::lang::Object(obj) {}

          SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane &, const ::org::hipparchus::geometry::partitioning::SubHyperplane &);

          ::org::hipparchus::geometry::partitioning::SubHyperplane getMinus() const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane getPlus() const;
          ::org::hipparchus::geometry::partitioning::Side getSide() const;
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
        extern PyType_Def PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane);
        extern PyTypeObject *PY_TYPE(SubHyperplane$SplitSubHyperplane);

        class t_SubHyperplane$SplitSubHyperplane {
        public:
          PyObject_HEAD
          SubHyperplane$SplitSubHyperplane object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SubHyperplane$SplitSubHyperplane *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SubHyperplane$SplitSubHyperplane&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SubHyperplane$SplitSubHyperplane&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
