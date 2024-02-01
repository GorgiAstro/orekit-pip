#ifndef org_hipparchus_geometry_euclidean_twod_Segment_H
#define org_hipparchus_geometry_euclidean_twod_Segment_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Line;
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
              mid_init$_f46fa5f6c40a5c85,
              mid_init$_7f7842afd4d898dc,
              mid_distance_fa70b1ee85089725,
              mid_getEnd_0490d0574aafb07c,
              mid_getLength_9981f74b2d109da6,
              mid_getLine_72d7a4f683ad4a34,
              mid_getStart_0490d0574aafb07c,
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
