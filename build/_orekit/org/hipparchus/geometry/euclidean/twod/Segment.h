#ifndef org_hipparchus_geometry_euclidean_twod_Segment_H
#define org_hipparchus_geometry_euclidean_twod_Segment_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Line;
          class Vector2D;
        }
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
      namespace euclidean {
        namespace twod {

          class Segment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cfb070b7ebe3030b,
              mid_init$_b2fa07e96193ae69,
              mid_distance_f29c6927714cda74,
              mid_getEnd_f681f2fc9cdfab57,
              mid_getLength_557b8123390d8d0c,
              mid_getLine_e207c2684f5ea968,
              mid_getStart_f681f2fc9cdfab57,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Segment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Segment(const Segment& obj) : ::java::lang::Object(obj) {}

            Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Line &);
            Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble);

            jdouble distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D getEnd() const;
            jdouble getLength() const;
            ::org::hipparchus::geometry::euclidean::twod::Line getLine() const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D getStart() const;
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
      namespace euclidean {
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Segment);
          extern PyTypeObject *PY_TYPE(Segment);

          class t_Segment {
          public:
            PyObject_HEAD
            Segment object;
            static PyObject *wrap_Object(const Segment&);
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
