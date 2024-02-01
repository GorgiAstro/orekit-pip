#ifndef org_hipparchus_geometry_spherical_oned_Arc_H
#define org_hipparchus_geometry_spherical_oned_Arc_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class S1Point;
        }
      }
      namespace partitioning {
        class Region$Location;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace spherical {
        namespace oned {

          class Arc : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bd28dc6055dc5bbd,
              mid_checkPoint_45dad54a87e7f240,
              mid_getBarycenter_9981f74b2d109da6,
              mid_getInf_9981f74b2d109da6,
              mid_getOffset_7cfd87fdb22a0503,
              mid_getOffset_bf28ed64d6e8576b,
              mid_getSize_9981f74b2d109da6,
              mid_getSup_9981f74b2d109da6,
              mid_getTolerance_9981f74b2d109da6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Arc(const Arc& obj) : ::java::lang::Object(obj) {}

            Arc(jdouble, jdouble, jdouble);

            ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(jdouble) const;
            jdouble getBarycenter() const;
            jdouble getInf() const;
            jdouble getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point &) const;
            jdouble getOffset(jdouble) const;
            jdouble getSize() const;
            jdouble getSup() const;
            jdouble getTolerance() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Arc);
          extern PyTypeObject *PY_TYPE(Arc);

          class t_Arc {
          public:
            PyObject_HEAD
            Arc object;
            static PyObject *wrap_Object(const Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
