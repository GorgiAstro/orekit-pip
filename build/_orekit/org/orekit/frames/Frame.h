#ifndef org_orekit_frames_Frame_H
#define org_orekit_frames_Frame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
      class TransformProvider;
      class StaticTransform;
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Frame : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2c9eb35eb4351d75,
          mid_init$_338c12e15b03388d,
          mid_init$_4f060f3eeb795497,
          mid_init$_5b56090a469fd494,
          mid_getAncestor_d41f06476b4facac,
          mid_getDepth_d6ab429752e7c267,
          mid_getFrozenFrame_80f13c4cdaa2d426,
          mid_getName_d2c8eb4129821f0e,
          mid_getParent_cb151471db4570f0,
          mid_getRoot_cb151471db4570f0,
          mid_getStaticTransformTo_60e345a418d4662f,
          mid_getStaticTransformTo_e73be67fef493a57,
          mid_getTransformProvider_fd7cd467d992431a,
          mid_getTransformTo_ccc97eb30f689f7c,
          mid_getTransformTo_a8bd256671a35bf7,
          mid_isChildOf_295aca1f11b596c0,
          mid_isPseudoInertial_eee3de00fe971136,
          mid_toString_d2c8eb4129821f0e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frame(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frame(const Frame& obj) : ::java::lang::Object(obj) {}

        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &);
        Frame(const Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &, jboolean);
        Frame(const Frame &, const ::org::orekit::frames::TransformProvider &, const ::java::lang::String &, jboolean);

        Frame getAncestor(jint) const;
        jint getDepth() const;
        Frame getFrozenFrame(const Frame &, const ::org::orekit::time::AbsoluteDate &, const ::java::lang::String &) const;
        ::java::lang::String getName() const;
        Frame getParent() const;
        static Frame getRoot();
        ::org::orekit::frames::StaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::TransformProvider getTransformProvider() const;
        ::org::orekit::frames::Transform getTransformTo(const Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransformTo(const Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jboolean isChildOf(const Frame &) const;
        jboolean isPseudoInertial() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Frame);
      extern PyTypeObject *PY_TYPE(Frame);

      class t_Frame {
      public:
        PyObject_HEAD
        Frame object;
        static PyObject *wrap_Object(const Frame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
