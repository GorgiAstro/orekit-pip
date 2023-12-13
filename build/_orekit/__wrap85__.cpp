#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_207671faf4998ddc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_values_ade4c95e7676c93d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_getTriggeredIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "getTriggeredIncreasing", "()Z");
            mids$[mid_selectTransformer_fe5fd6209ed031ee] = env->getMethodID(cls, "selectTransformer", "(Lorg/orekit/propagation/events/Transformer;DZ)Lorg/orekit/propagation/events/Transformer;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_207671faf4998ddc], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_ade4c95e7676c93d]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *JacobiPolynomials::class$ = NULL;
            jmethodID *JacobiPolynomials::mids$ = NULL;
            bool JacobiPolynomials::live$ = false;

            jclass JacobiPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_d4d597110f333b5c] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
                mids$[mid_getValue_80bd96a970c18743] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
                mids$[mid_getValueAndDerivative_e5f4d4b0510a0965] = env->getStaticMethodID(cls, "getValueAndDerivative", "(IIID)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::analysis::differentiation::FieldGradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::FieldGradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_d4d597110f333b5c], a0, a1, a2, a3.this$));
            }

            ::org::hipparchus::analysis::differentiation::Gradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::Gradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::Gradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_80bd96a970c18743], a0, a1, a2, a3.this$));
            }

            JArray< jdouble > JacobiPolynomials::getValueAndDerivative(jint a0, jint a1, jint a2, jdouble a3)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_getValueAndDerivative_e5f4d4b0510a0965], a0, a1, a2, a3));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args);
            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_JacobiPolynomials__methods_[] = {
              DECLARE_METHOD(t_JacobiPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValue, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValueAndDerivative, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JacobiPolynomials)[] = {
              { Py_tp_methods, t_JacobiPolynomials__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JacobiPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JacobiPolynomials, t_JacobiPolynomials, JacobiPolynomials);

            void t_JacobiPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(JacobiPolynomials), &PY_TYPE_DEF(JacobiPolynomials), module, "JacobiPolynomials", 0);
            }

            void t_JacobiPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "class_", make_descriptor(JacobiPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "wrapfn_", make_descriptor(t_JacobiPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JacobiPolynomials::initializeClass, 1)))
                return NULL;
              return t_JacobiPolynomials::wrap_Object(JacobiPolynomials(((t_JacobiPolynomials *) arg)->object.this$));
            }
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JacobiPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::FieldGradient a3((jobject) NULL);
                  PyTypeObject **p3;
                  ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIK", ::org::hipparchus::analysis::differentiation::FieldGradient::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::analysis::differentiation::t_FieldGradient::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result);
                  }
                }
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::Gradient a3((jobject) NULL);
                  ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getValue", args);
              return NULL;
            }

            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "IIID", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValueAndDerivative(a0, a1, a2, a3));
                return result.wrap();
              }

              PyErr_SetArgsError(type, "getValueAndDerivative", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame::mids$ = NULL;
      bool LocalMagneticFieldFrame::live$ = false;

      jclass LocalMagneticFieldFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_86179a66f95f2dd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_a0d185198633bdd4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getMagneticField_7e28d517d0d29909] = env->getMethodID(cls, "getMagneticField", "()Lorg/orekit/models/earth/GeoMagneticField;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_9c03210e4a66b8b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_8f928c19e9edde2b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86179a66f95f2dd8, a0.this$, a1.this$, a2.this$)) {}

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector & a2, const ::org::orekit::frames::Frame & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0d185198633bdd4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::frames::Frame LocalMagneticFieldFrame::getInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::models::earth::GeoMagneticField LocalMagneticFieldFrame::getMagneticField() const
      {
        return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getMagneticField_7e28d517d0d29909]));
      }

      ::java::lang::String LocalMagneticFieldFrame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9c03210e4a66b8b3], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8f928c19e9edde2b], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, inertialFrame),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, magneticField),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getMagneticField, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getName, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, rotationFromInertial, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame__methods_ },
        { Py_tp_init, (void *) t_LocalMagneticFieldFrame_init_ },
        { Py_tp_getset, t_LocalMagneticFieldFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame, t_LocalMagneticFieldFrame, LocalMagneticFieldFrame);

      void t_LocalMagneticFieldFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame), &PY_TYPE_DEF(LocalMagneticFieldFrame), module, "LocalMagneticFieldFrame", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "LOFBuilderVector", make_descriptor(&PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector)));
      }

      void t_LocalMagneticFieldFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "class_", make_descriptor(LocalMagneticFieldFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame::wrap_Object(LocalMagneticFieldFrame(((t_LocalMagneticFieldFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::frames::t_LocalMagneticFieldFrame$LOFBuilderVector::parameters_, &a3))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);
        OBJ_CALL(result = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
        OBJ_CALL(value = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MedianDate::class$ = NULL;
          jmethodID *MedianDate::mids$ = NULL;
          bool MedianDate::live$ = false;

          jclass MedianDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MedianDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MedianDate::MedianDate(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MedianDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
          }

          ::java::lang::String MedianDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          jboolean MedianDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_getName(t_MedianDate *self);
          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data);
          static PyGetSetDef t_MedianDate__fields_[] = {
            DECLARE_GET_FIELD(t_MedianDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MedianDate__methods_[] = {
            DECLARE_METHOD(t_MedianDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_MedianDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_MedianDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MedianDate)[] = {
            { Py_tp_methods, t_MedianDate__methods_ },
            { Py_tp_init, (void *) t_MedianDate_init_ },
            { Py_tp_getset, t_MedianDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MedianDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MedianDate, t_MedianDate, MedianDate);

          void t_MedianDate::install(PyObject *module)
          {
            installType(&PY_TYPE(MedianDate), &PY_TYPE_DEF(MedianDate), module, "MedianDate", 0);
          }

          void t_MedianDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "class_", make_descriptor(MedianDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "wrapfn_", make_descriptor(t_MedianDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MedianDate::initializeClass, 1)))
              return NULL;
            return t_MedianDate::wrap_Object(MedianDate(((t_MedianDate *) arg)->object.this$));
          }
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MedianDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            MedianDate object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = MedianDate(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_getName(t_MedianDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LyapunovOrbit::class$ = NULL;
      jmethodID *LyapunovOrbit::mids$ = NULL;
      bool LyapunovOrbit::live$ = false;

      jclass LyapunovOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LyapunovOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9881ba0e7257cda5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;D)V");
          mids$[mid_init$_61210a58b1c5967a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_57264af3b06f967f] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_9881ba0e7257cda5, a0.this$, a1)) {}

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_61210a58b1c5967a, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LyapunovOrbit__methods_[] = {
        DECLARE_METHOD(t_LyapunovOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LyapunovOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LyapunovOrbit)[] = {
        { Py_tp_methods, t_LyapunovOrbit__methods_ },
        { Py_tp_init, (void *) t_LyapunovOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LyapunovOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(LyapunovOrbit, t_LyapunovOrbit, LyapunovOrbit);

      void t_LyapunovOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LyapunovOrbit), &PY_TYPE_DEF(LyapunovOrbit), module, "LyapunovOrbit", 0);
      }

      void t_LyapunovOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "class_", make_descriptor(LyapunovOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "wrapfn_", make_descriptor(t_LyapunovOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LyapunovOrbit::initializeClass, 1)))
          return NULL;
        return t_LyapunovOrbit::wrap_Object(LyapunovOrbit(((t_LyapunovOrbit *) arg)->object.this$));
      }
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LyapunovOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::RichardsonExpansion::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere2D::class$ = NULL;
        jmethodID *InterpolatingMicrosphere2D::mids$ = NULL;
        bool InterpolatingMicrosphere2D::live$ = false;

        jclass InterpolatingMicrosphere2D::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_copy_8647effe2b9c12a8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere2D::InterpolatingMicrosphere2D(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        InterpolatingMicrosphere2D InterpolatingMicrosphere2D::copy() const
        {
          return InterpolatingMicrosphere2D(env->callObjectMethod(this$, mids$[mid_copy_8647effe2b9c12a8]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args);

        static PyMethodDef t_InterpolatingMicrosphere2D__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere2D)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere2D__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere2D_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere2D)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere2D, t_InterpolatingMicrosphere2D, InterpolatingMicrosphere2D);

        void t_InterpolatingMicrosphere2D::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere2D), &PY_TYPE_DEF(InterpolatingMicrosphere2D), module, "InterpolatingMicrosphere2D", 0);
        }

        void t_InterpolatingMicrosphere2D::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "class_", make_descriptor(InterpolatingMicrosphere2D::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere2D::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere2D::wrap_Object(InterpolatingMicrosphere2D(((t_InterpolatingMicrosphere2D *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          InterpolatingMicrosphere2D object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = InterpolatingMicrosphere2D(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args)
        {
          InterpolatingMicrosphere2D result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_InterpolatingMicrosphere2D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterpolatingMicrosphere2D), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConfigurableLowThrustManeuver::class$ = NULL;
        jmethodID *ConfigurableLowThrustManeuver::mids$ = NULL;
        bool ConfigurableLowThrustManeuver::live$ = false;

        jclass ConfigurableLowThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_51940d8c6b3ff8a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;DD)V");
            mids$[mid_getIsp_b74f83833fdad017] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_fd347811007a6ba3] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustDirectionProvider_0df8595e014a87b9] = env->getMethodID(cls, "getThrustDirectionProvider", "()Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
            mids$[mid_getThrustMagnitude_b74f83833fdad017] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_fd347811007a6ba3] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfigurableLowThrustManeuver::ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, jdouble a2, jdouble a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_51940d8c6b3ff8a5, a0.this$, a1.this$, a2, a3)) {}

        jdouble ConfigurableLowThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_b74f83833fdad017]);
        }

        jdouble ConfigurableLowThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_fd347811007a6ba3], a0.this$);
        }

        ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider ConfigurableLowThrustManeuver::getThrustDirectionProvider() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getThrustDirectionProvider_0df8595e014a87b9]));
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b74f83833fdad017]);
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_fd347811007a6ba3], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyGetSetDef t_ConfigurableLowThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustDirectionProvider),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustMagnitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfigurableLowThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustDirectionProvider, METH_NOARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustMagnitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfigurableLowThrustManeuver)[] = {
          { Py_tp_methods, t_ConfigurableLowThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConfigurableLowThrustManeuver_init_ },
          { Py_tp_getset, t_ConfigurableLowThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfigurableLowThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConfigurableLowThrustManeuver, t_ConfigurableLowThrustManeuver, ConfigurableLowThrustManeuver);

        void t_ConfigurableLowThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfigurableLowThrustManeuver), &PY_TYPE_DEF(ConfigurableLowThrustManeuver), module, "ConfigurableLowThrustManeuver", 0);
        }

        void t_ConfigurableLowThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "class_", make_descriptor(ConfigurableLowThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "wrapfn_", make_descriptor(t_ConfigurableLowThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConfigurableLowThrustManeuver::wrap_Object(ConfigurableLowThrustManeuver(((t_ConfigurableLowThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          ConfigurableLowThrustManeuver object((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = ConfigurableLowThrustManeuver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853Integrator::class$ = NULL;
        jmethodID *DormandPrince853Integrator::mids$ = NULL;
        bool DormandPrince853Integrator::live$ = false;

        jclass DormandPrince853Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa31b8b89ee72c31] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_ff41007c0a2a3ca0] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853StateInterpolator;");
            mids$[mid_estimateError_30c238558e44050a] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aa31b8b89ee72c31, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince853Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > DormandPrince853Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > DormandPrince853Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
        }

        jint DormandPrince853Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince853Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853Integrator)[] = {
          { Py_tp_methods, t_DormandPrince853Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853Integrator_init_ },
          { Py_tp_getset, t_DormandPrince853Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853Integrator, t_DormandPrince853Integrator, DormandPrince853Integrator);

        void t_DormandPrince853Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853Integrator), &PY_TYPE_DEF(DormandPrince853Integrator), module, "DormandPrince853Integrator", 0);
        }

        void t_DormandPrince853Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "class_", make_descriptor(DormandPrince853Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "wrapfn_", make_descriptor(t_DormandPrince853Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853Integrator::wrap_Object(DormandPrince853Integrator(((t_DormandPrince853Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SemiDefinitePositiveCholeskyDecomposition::class$ = NULL;
      jmethodID *SemiDefinitePositiveCholeskyDecomposition::mids$ = NULL;
      bool SemiDefinitePositiveCholeskyDecomposition::live$ = false;
      jdouble SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD = (jdouble) 0;

      jclass SemiDefinitePositiveCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getL_f77d745f2128c391] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_f77d745f2128c391] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "POSITIVITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_f77d745f2128c391]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_SemiDefinitePositiveCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, lT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SemiDefinitePositiveCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getLT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SemiDefinitePositiveCholeskyDecomposition)[] = {
        { Py_tp_methods, t_SemiDefinitePositiveCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_SemiDefinitePositiveCholeskyDecomposition_init_ },
        { Py_tp_getset, t_SemiDefinitePositiveCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SemiDefinitePositiveCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SemiDefinitePositiveCholeskyDecomposition, t_SemiDefinitePositiveCholeskyDecomposition, SemiDefinitePositiveCholeskyDecomposition);

      void t_SemiDefinitePositiveCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), &PY_TYPE_DEF(SemiDefinitePositiveCholeskyDecomposition), module, "SemiDefinitePositiveCholeskyDecomposition", 0);
      }

      void t_SemiDefinitePositiveCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "class_", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "wrapfn_", make_descriptor(t_SemiDefinitePositiveCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(SemiDefinitePositiveCholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "POSITIVITY_THRESHOLD", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD));
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_SemiDefinitePositiveCholeskyDecomposition::wrap_Object(SemiDefinitePositiveCholeskyDecomposition(((t_SemiDefinitePositiveCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *SimpsonIntegrator::class$ = NULL;
        jmethodID *SimpsonIntegrator::mids$ = NULL;
        bool SimpsonIntegrator::live$ = false;
        jint SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass SimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/SimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_5408957787adf55f] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpsonIntegrator::SimpsonIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SimpsonIntegrator::SimpsonIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        SimpsonIntegrator::SimpsonIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5408957787adf55f, a0, a1, a2, a3)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_SimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpsonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpsonIntegrator)[] = {
          { Py_tp_methods, t_SimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_SimpsonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(SimpsonIntegrator, t_SimpsonIntegrator, SimpsonIntegrator);

        void t_SimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpsonIntegrator), &PY_TYPE_DEF(SimpsonIntegrator), module, "SimpsonIntegrator", 0);
        }

        void t_SimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "class_", make_descriptor(SimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "wrapfn_", make_descriptor(t_SimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(SimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_SimpsonIntegrator::wrap_Object(SimpsonIntegrator(((t_SimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpsonIntegrator object((jobject) NULL);

              INT_CALL(object = SimpsonIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractScheduler::class$ = NULL;
          jmethodID *PythonAbstractScheduler::mids$ = NULL;
          bool PythonAbstractScheduler::live$ = false;

          jclass PythonAbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1c3d87302302feaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_measurementIsFeasible_a35647bda2901f54] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractScheduler::PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_1c3d87302302feaf, a0.this$, a1.this$)) {}

          void PythonAbstractScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractScheduler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args);
          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self);
          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args);
          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data);
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data);
          static PyGetSetDef t_PythonAbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, self),
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractScheduler)[] = {
            { Py_tp_methods, t_PythonAbstractScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractScheduler_init_ },
            { Py_tp_getset, t_PythonAbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(PythonAbstractScheduler, t_PythonAbstractScheduler, PythonAbstractScheduler);
          PyObject *t_PythonAbstractScheduler::wrap_Object(const PythonAbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractScheduler), &PY_TYPE_DEF(PythonAbstractScheduler), module, "PythonAbstractScheduler", 1);
          }

          void t_PythonAbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "class_", make_descriptor(PythonAbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "wrapfn_", make_descriptor(t_PythonAbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z", (void *) t_PythonAbstractScheduler_measurementIsFeasible0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractScheduler_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractScheduler::wrap_Object(PythonAbstractScheduler(((t_PythonAbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            PythonAbstractScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = PythonAbstractScheduler(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "measurementIsFeasible", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("measurementIsFeasible", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryAttribute::class$ = NULL;
        jmethodID *BoundaryAttribute::mids$ = NULL;
        bool BoundaryAttribute::live$ = false;

        jclass BoundaryAttribute::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryAttribute");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPlusInside_0417f9f9ce6ee466] = env->getMethodID(cls, "getPlusInside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlusOutside_0417f9f9ce6ee466] = env->getMethodID(cls, "getPlusOutside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSplitters_6741a6c608861acb] = env->getMethodID(cls, "getSplitters", "()Lorg/hipparchus/geometry/partitioning/NodesSet;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusInside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusInside_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusOutside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusOutside_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::NodesSet BoundaryAttribute::getSplitters() const
        {
          return ::org::hipparchus::geometry::partitioning::NodesSet(env->callObjectMethod(this$, mids$[mid_getSplitters_6741a6c608861acb]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args);
        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data);
        static PyGetSetDef t_BoundaryAttribute__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusInside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusOutside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, splitters),
          DECLARE_GET_FIELD(t_BoundaryAttribute, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryAttribute__methods_[] = {
          DECLARE_METHOD(t_BoundaryAttribute, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusInside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusOutside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getSplitters, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryAttribute)[] = {
          { Py_tp_methods, t_BoundaryAttribute__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BoundaryAttribute__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryAttribute)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryAttribute, t_BoundaryAttribute, BoundaryAttribute);
        PyObject *t_BoundaryAttribute::wrap_Object(const BoundaryAttribute& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryAttribute::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryAttribute::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryAttribute), &PY_TYPE_DEF(BoundaryAttribute), module, "BoundaryAttribute", 0);
        }

        void t_BoundaryAttribute::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "class_", make_descriptor(BoundaryAttribute::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "wrapfn_", make_descriptor(t_BoundaryAttribute::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryAttribute::initializeClass, 1)))
            return NULL;
          return t_BoundaryAttribute::wrap_Object(BoundaryAttribute(((t_BoundaryAttribute *) arg)->object.this$));
        }
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryAttribute::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Attitude::class$ = NULL;
      jmethodID *Attitude::mids$ = NULL;
      bool Attitude::live$ = false;

      jclass Attitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Attitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9cc28a23ed35929f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_2c8188d8ce9c0bed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_0dc338dda588c0d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOrientation_9825c51fb1940671] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_ff298a39b3cae5da] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSpin_8b724f8b4fdad1a2] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_4d06035acf6ca0aa] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_682a0bac5d9d92db] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Attitude::Attitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cc28a23ed35929f, a0.this$, a1.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c8188d8ce9c0bed, a0.this$, a1.this$, a2.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0dc338dda588c0d5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate Attitude::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      ::org::orekit::utils::TimeStampedAngularCoordinates Attitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_9825c51fb1940671]));
      }

      ::org::orekit::frames::Frame Attitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Attitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_ff298a39b3cae5da]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSpin_8b724f8b4fdad1a2]));
      }

      Attitude Attitude::shiftedBy(jdouble a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_4d06035acf6ca0aa], a0));
      }

      Attitude Attitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_682a0bac5d9d92db], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Attitude_getDate(t_Attitude *self);
      static PyObject *t_Attitude_getOrientation(t_Attitude *self);
      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self);
      static PyObject *t_Attitude_getRotation(t_Attitude *self);
      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self);
      static PyObject *t_Attitude_getSpin(t_Attitude *self);
      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data);
      static PyGetSetDef t_Attitude__fields_[] = {
        DECLARE_GET_FIELD(t_Attitude, date),
        DECLARE_GET_FIELD(t_Attitude, orientation),
        DECLARE_GET_FIELD(t_Attitude, referenceFrame),
        DECLARE_GET_FIELD(t_Attitude, rotation),
        DECLARE_GET_FIELD(t_Attitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_Attitude, spin),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Attitude__methods_[] = {
        DECLARE_METHOD(t_Attitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, shiftedBy, METH_O),
        DECLARE_METHOD(t_Attitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Attitude)[] = {
        { Py_tp_methods, t_Attitude__methods_ },
        { Py_tp_init, (void *) t_Attitude_init_ },
        { Py_tp_getset, t_Attitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Attitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Attitude, t_Attitude, Attitude);

      void t_Attitude::install(PyObject *module)
      {
        installType(&PY_TYPE(Attitude), &PY_TYPE_DEF(Attitude), module, "Attitude", 0);
      }

      void t_Attitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "class_", make_descriptor(Attitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "wrapfn_", make_descriptor(t_Attitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Attitude::initializeClass, 1)))
          return NULL;
        return t_Attitude::wrap_Object(Attitude(((t_Attitude *) arg)->object.this$));
      }
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Attitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Attitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Attitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Attitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Attitude_getDate(t_Attitude *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Attitude_getOrientation(t_Attitude *self)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotation(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_getSpin(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg)
      {
        jdouble a0;
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }

      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessagesParser::class$ = NULL;
          jmethodID *MessagesParser::mids$ = NULL;
          bool MessagesParser::live$ = false;

          jclass MessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_parse_21aa1427b4282155] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;Z)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_getMessageType_7fab758a818e0182] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_c7387344adbf63af] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MessagesParser::MessagesParser(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

          ::org::orekit::gnss::metric::messages::ParsedMessage MessagesParser::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jboolean a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_21aa1427b4282155], a0.this$, a1));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args);

          static PyMethodDef t_MessagesParser__methods_[] = {
            DECLARE_METHOD(t_MessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessagesParser)[] = {
            { Py_tp_methods, t_MessagesParser__methods_ },
            { Py_tp_init, (void *) t_MessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessagesParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessagesParser, t_MessagesParser, MessagesParser);

          void t_MessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(MessagesParser), &PY_TYPE_DEF(MessagesParser), module, "MessagesParser", 0);
          }

          void t_MessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "class_", make_descriptor(MessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "wrapfn_", make_descriptor(t_MessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessagesParser::initializeClass, 1)))
              return NULL;
            return t_MessagesParser::wrap_Object(MessagesParser(((t_MessagesParser *) arg)->object.this$));
          }
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MessagesParser(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeStamped::class$ = NULL;
      jmethodID *PythonFieldTimeStamped::mids$ = NULL;
      bool PythonFieldTimeStamped::live$ = false;

      jclass PythonFieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStamped::PythonFieldTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldTimeStamped::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args);
      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self);
      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data);
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStamped)[] = {
        { Py_tp_methods, t_PythonFieldTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStamped_init_ },
        { Py_tp_getset, t_PythonFieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStamped, t_PythonFieldTimeStamped, PythonFieldTimeStamped);
      PyObject *t_PythonFieldTimeStamped::wrap_Object(const PythonFieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStamped), &PY_TYPE_DEF(PythonFieldTimeStamped), module, "PythonFieldTimeStamped", 1);
      }

      void t_PythonFieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "class_", make_descriptor(PythonFieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "wrapfn_", make_descriptor(t_PythonFieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStamped::wrap_Object(PythonFieldTimeStamped(((t_PythonFieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042::class$ = NULL;
              jmethodID *Rtcm1042::mids$ = NULL;
              bool Rtcm1042::live$ = false;

              jclass Rtcm1042::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c12363dea05be2ec] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042::Rtcm1042(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_c12363dea05be2ec, a0, a1.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args);
              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data);
              static PyGetSetDef t_Rtcm1042__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1042, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042)[] = {
                { Py_tp_methods, t_Rtcm1042__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042_init_ },
                { Py_tp_getset, t_Rtcm1042__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1042, t_Rtcm1042, Rtcm1042);
              PyObject *t_Rtcm1042::wrap_Object(const Rtcm1042& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1042::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1042::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042), &PY_TYPE_DEF(Rtcm1042), module, "Rtcm1042", 0);
              }

              void t_Rtcm1042::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "class_", make_descriptor(Rtcm1042::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "wrapfn_", make_descriptor(t_Rtcm1042::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042::wrap_Object(Rtcm1042(((t_Rtcm1042 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data a1((jobject) NULL);
                Rtcm1042 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1042(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1042Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonOrekitFixedStepHandler::mids$ = NULL;
        bool PythonOrekitFixedStepHandler::live$ = false;

        jclass PythonOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_3189c7446dbbb87e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitFixedStepHandler::PythonOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self);
        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitFixedStepHandler, t_PythonOrekitFixedStepHandler, PythonOrekitFixedStepHandler);

        void t_PythonOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitFixedStepHandler), &PY_TYPE_DEF(PythonOrekitFixedStepHandler), module, "PythonOrekitFixedStepHandler", 1);
        }

        void t_PythonOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "class_", make_descriptor(PythonOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitFixedStepHandler::wrap_Object(PythonOrekitFixedStepHandler(((t_PythonOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GammaDistribution::class$ = NULL;
        jmethodID *GammaDistribution::mids$ = NULL;
        bool GammaDistribution::live$ = false;

        jclass GammaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GammaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_b74f83833fdad017] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble GammaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble GammaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble GammaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble GammaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble GammaDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble GammaDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_b74f83833fdad017]);
        }

        jdouble GammaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble GammaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean GammaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble GammaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data);
        static PyGetSetDef t_GammaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GammaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GammaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GammaDistribution, scale),
          DECLARE_GET_FIELD(t_GammaDistribution, shape),
          DECLARE_GET_FIELD(t_GammaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GammaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GammaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GammaDistribution__methods_[] = {
          DECLARE_METHOD(t_GammaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GammaDistribution)[] = {
          { Py_tp_methods, t_GammaDistribution__methods_ },
          { Py_tp_init, (void *) t_GammaDistribution_init_ },
          { Py_tp_getset, t_GammaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GammaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GammaDistribution, t_GammaDistribution, GammaDistribution);

        void t_GammaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GammaDistribution), &PY_TYPE_DEF(GammaDistribution), module, "GammaDistribution", 0);
        }

        void t_GammaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "class_", make_descriptor(GammaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "wrapfn_", make_descriptor(t_GammaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GammaDistribution::initializeClass, 1)))
            return NULL;
          return t_GammaDistribution::wrap_Object(GammaDistribution(((t_GammaDistribution *) arg)->object.this$));
        }
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GammaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = GammaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/NetworkCrawler.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *NetworkCrawler::class$ = NULL;
      jmethodID *NetworkCrawler::mids$ = NULL;
      bool NetworkCrawler::live$ = false;

      jclass NetworkCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/NetworkCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_71010176ce552a15] = env->getMethodID(cls, "<init>", "([Ljava/net/URL;)V");
          mids$[mid_setTimeout_44ed599e93e8a30c] = env->getMethodID(cls, "setTimeout", "(I)V");
          mids$[mid_getStream_a7576d5d76a89054] = env->getMethodID(cls, "getStream", "(Ljava/net/URL;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_dce0a16ba3296f61] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/net/URL;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_4863d430baae1067] = env->getMethodID(cls, "getBaseName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getCompleteName_4863d430baae1067] = env->getMethodID(cls, "getCompleteName", "(Ljava/net/URL;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NetworkCrawler::NetworkCrawler(const JArray< ::java::net::URL > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_71010176ce552a15, a0.this$)) {}

      void NetworkCrawler::setTimeout(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setTimeout_44ed599e93e8a30c], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args);
      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg);
      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data);
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data);
      static PyGetSetDef t_NetworkCrawler__fields_[] = {
        DECLARE_SET_FIELD(t_NetworkCrawler, timeout),
        DECLARE_GET_FIELD(t_NetworkCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NetworkCrawler__methods_[] = {
        DECLARE_METHOD(t_NetworkCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_NetworkCrawler, setTimeout, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NetworkCrawler)[] = {
        { Py_tp_methods, t_NetworkCrawler__methods_ },
        { Py_tp_init, (void *) t_NetworkCrawler_init_ },
        { Py_tp_getset, t_NetworkCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NetworkCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(NetworkCrawler, t_NetworkCrawler, NetworkCrawler);
      PyObject *t_NetworkCrawler::wrap_Object(const NetworkCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_NetworkCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_NetworkCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(NetworkCrawler), &PY_TYPE_DEF(NetworkCrawler), module, "NetworkCrawler", 0);
      }

      void t_NetworkCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "class_", make_descriptor(NetworkCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "wrapfn_", make_descriptor(t_NetworkCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NetworkCrawler::initializeClass, 1)))
          return NULL;
        return t_NetworkCrawler::wrap_Object(NetworkCrawler(((t_NetworkCrawler *) arg)->object.this$));
      }
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NetworkCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::net::URL > a0((jobject) NULL);
        NetworkCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::net::URL::initializeClass, &a0))
        {
          INT_CALL(object = NetworkCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::net::PY_TYPE(URL);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setTimeout(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
        return NULL;
      }
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setTimeout(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "timeout", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolatingFunction::class$ = NULL;
        jmethodID *BilinearInterpolatingFunction::mids$ = NULL;
        bool BilinearInterpolatingFunction::live$ = false;

        jclass BilinearInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f7c4bf9d0d94a6c] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_getXInf_b74f83833fdad017] = env->getMethodID(cls, "getXInf", "()D");
            mids$[mid_getXSup_b74f83833fdad017] = env->getMethodID(cls, "getXSup", "()D");
            mids$[mid_getYInf_b74f83833fdad017] = env->getMethodID(cls, "getYInf", "()D");
            mids$[mid_getYSup_b74f83833fdad017] = env->getMethodID(cls, "getYSup", "()D");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_c6408fdce2cc6c1a] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolatingFunction::BilinearInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f7c4bf9d0d94a6c, a0.this$, a1.this$, a2.this$)) {}

        jdouble BilinearInterpolatingFunction::getXInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXInf_b74f83833fdad017]);
        }

        jdouble BilinearInterpolatingFunction::getXSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSup_b74f83833fdad017]);
        }

        jdouble BilinearInterpolatingFunction::getYInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYInf_b74f83833fdad017]);
        }

        jdouble BilinearInterpolatingFunction::getYSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYSup_b74f83833fdad017]);
        }

        jdouble BilinearInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement BilinearInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c6408fdce2cc6c1a], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data);
        static PyGetSetDef t_BilinearInterpolatingFunction__fields_[] = {
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xSup),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, yInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, ySup),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BilinearInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolatingFunction)[] = {
          { Py_tp_methods, t_BilinearInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolatingFunction_init_ },
          { Py_tp_getset, t_BilinearInterpolatingFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolatingFunction, t_BilinearInterpolatingFunction, BilinearInterpolatingFunction);

        void t_BilinearInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolatingFunction), &PY_TYPE_DEF(BilinearInterpolatingFunction), module, "BilinearInterpolatingFunction", 0);
        }

        void t_BilinearInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "class_", make_descriptor(BilinearInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "wrapfn_", make_descriptor(t_BilinearInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolatingFunction::wrap_Object(BilinearInterpolatingFunction(((t_BilinearInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          BilinearInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = BilinearInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSup());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYSup());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *ValsecchiEncounterFrame::class$ = NULL;
        jmethodID *ValsecchiEncounterFrame::mids$ = NULL;
        bool ValsecchiEncounterFrame::live$ = false;

        jclass ValsecchiEncounterFrame::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/ValsecchiEncounterFrame");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3e711dd03f656c50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_e7272d224e58d28f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_bf95090cc5e2a8d4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_8851faa33644affd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_3e711dd03f656c50, a0.this$)) {}

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_e7272d224e58d28f, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019], a0.this$));
        }

        ::java::lang::String ValsecchiEncounterFrame::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_bf95090cc5e2a8d4], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8851faa33644affd], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {
        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data);
        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data);
        static PyGetSetDef t_ValsecchiEncounterFrame__fields_[] = {
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ValsecchiEncounterFrame__methods_[] = {
          DECLARE_METHOD(t_ValsecchiEncounterFrame, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getName, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ValsecchiEncounterFrame)[] = {
          { Py_tp_methods, t_ValsecchiEncounterFrame__methods_ },
          { Py_tp_init, (void *) t_ValsecchiEncounterFrame_init_ },
          { Py_tp_getset, t_ValsecchiEncounterFrame__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ValsecchiEncounterFrame)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(ValsecchiEncounterFrame, t_ValsecchiEncounterFrame, ValsecchiEncounterFrame);

        void t_ValsecchiEncounterFrame::install(PyObject *module)
        {
          installType(&PY_TYPE(ValsecchiEncounterFrame), &PY_TYPE_DEF(ValsecchiEncounterFrame), module, "ValsecchiEncounterFrame", 0);
        }

        void t_ValsecchiEncounterFrame::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "class_", make_descriptor(ValsecchiEncounterFrame::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "wrapfn_", make_descriptor(t_ValsecchiEncounterFrame::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ValsecchiEncounterFrame::initializeClass, 1)))
            return NULL;
          return t_ValsecchiEncounterFrame::wrap_Object(ValsecchiEncounterFrame(((t_ValsecchiEncounterFrame *) arg)->object.this$));
        }
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ValsecchiEncounterFrame::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLE::class$ = NULL;
          jmethodID *FieldTLE::mids$ = NULL;
          bool FieldTLE::live$ = false;
          ::java::lang::String *FieldTLE::B_STAR = NULL;
          jint FieldTLE::DEFAULT = (jint) 0;
          jint FieldTLE::SDP4 = (jint) 0;
          jint FieldTLE::SDP8 = (jint) 0;
          jint FieldTLE::SGP = (jint) 0;
          jint FieldTLE::SGP4 = (jint) 0;
          jint FieldTLE::SGP8 = (jint) 0;

          jclass FieldTLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_685931cb45816160] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_eb74d3b04b631428] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_b516d88ee4c59bdb] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ID)V");
              mids$[mid_init$_aef54e382ffb5bb5] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;IDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_b74f83833fdad017] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getClassification_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
              mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getElementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_55546ef6a647f39b] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getLaunchNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_81520b552cb3fa26] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionFirstDerivative_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionSecondDerivative_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_81520b552cb3fa26] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRaan_81520b552cb3fa26] = env->getMethodID(cls, "getRaan", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRevolutionNumberAtEpoch_55546ef6a647f39b] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_e7bf5b93f9300a4f] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_12b4ee9532b8e08d] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTLE_1c01e307dcced049] = env->getMethodID(cls, "toTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_685931cb45816160, a0.this$, a1.this$, a2.this$)) {}

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb74d3b04b631428, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b516d88ee4c59bdb, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aef54e382ffb5bb5, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17, a18.this$)) {}

          jboolean FieldTLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble FieldTLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_b74f83833fdad017]);
          }

          jchar FieldTLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_5e2f8fc4d7c03fbd]);
          }

          ::org::orekit::time::FieldAbsoluteDate FieldTLE::getDate() const
          {
            return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getE() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
          }

          jint FieldTLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_55546ef6a647f39b]);
          }

          jint FieldTLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_55546ef6a647f39b]);
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getI() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
          }

          jint FieldTLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_55546ef6a647f39b]);
          }

          ::java::lang::String FieldTLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf]));
          }

          jint FieldTLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_55546ef6a647f39b]);
          }

          ::java::lang::String FieldTLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String FieldTLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_1c1fa1e935d6cdcf]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanAnomaly() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotion() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionFirstDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionFirstDerivative_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionSecondDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionSecondDerivative_81520b552cb3fa26]));
          }

          ::java::util::List FieldTLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getPerigeeArgument() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getRaan() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRaan_81520b552cb3fa26]));
          }

          jint FieldTLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_55546ef6a647f39b]);
          }

          jint FieldTLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_55546ef6a647f39b]);
          }

          jint FieldTLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean FieldTLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_e7bf5b93f9300a4f], a0.this$, a1.this$);
          }

          FieldTLE FieldTLE::stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState & a0, const FieldTLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_12b4ee9532b8e08d], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String FieldTLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::propagation::analytical::tle::TLE FieldTLE::toTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_toTLE_1c01e307dcced049]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args);
          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getI(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data);
          static PyGetSetDef t_FieldTLE__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLE, bStar),
            DECLARE_GET_FIELD(t_FieldTLE, classification),
            DECLARE_GET_FIELD(t_FieldTLE, date),
            DECLARE_GET_FIELD(t_FieldTLE, e),
            DECLARE_GET_FIELD(t_FieldTLE, elementNumber),
            DECLARE_GET_FIELD(t_FieldTLE, ephemerisType),
            DECLARE_GET_FIELD(t_FieldTLE, i),
            DECLARE_GET_FIELD(t_FieldTLE, launchNumber),
            DECLARE_GET_FIELD(t_FieldTLE, launchPiece),
            DECLARE_GET_FIELD(t_FieldTLE, launchYear),
            DECLARE_GET_FIELD(t_FieldTLE, line1),
            DECLARE_GET_FIELD(t_FieldTLE, line2),
            DECLARE_GET_FIELD(t_FieldTLE, meanAnomaly),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotion),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLE, perigeeArgument),
            DECLARE_GET_FIELD(t_FieldTLE, raan),
            DECLARE_GET_FIELD(t_FieldTLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_FieldTLE, satelliteNumber),
            DECLARE_GET_FIELD(t_FieldTLE, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLE__methods_[] = {
            DECLARE_METHOD(t_FieldTLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, getBStar, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, toTLE, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLE)[] = {
            { Py_tp_methods, t_FieldTLE__methods_ },
            { Py_tp_init, (void *) t_FieldTLE_init_ },
            { Py_tp_getset, t_FieldTLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTLE, t_FieldTLE, FieldTLE);
          PyObject *t_FieldTLE::wrap_Object(const FieldTLE& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLE::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLE::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLE), &PY_TYPE_DEF(FieldTLE), module, "FieldTLE", 0);
          }

          void t_FieldTLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "class_", make_descriptor(FieldTLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "wrapfn_", make_descriptor(t_FieldTLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(FieldTLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "B_STAR", make_descriptor(j2p(*FieldTLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "DEFAULT", make_descriptor(FieldTLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP4", make_descriptor(FieldTLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP8", make_descriptor(FieldTLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP", make_descriptor(FieldTLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP4", make_descriptor(FieldTLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP8", make_descriptor(FieldTLE::SGP8));
          }

          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLE::initializeClass, 1)))
              return NULL;
            return t_FieldTLE::wrap_Object(FieldTLE(((t_FieldTLE *) arg)->object.this$));
          }
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kss", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kssk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKID", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKIDk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17, &a18))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBStar());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self)
          {
            ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLE_getE(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getE());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getI(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getI());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotion());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getRaan());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTLE a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            FieldTLE result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, FieldTLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, t_FieldTLE::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::stateToTLE(a0, a1, a2));
              return t_FieldTLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.toTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data)
          {
            ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getE());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getI());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotion());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getRaan());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationTimeScale::class$ = NULL;
      jmethodID *ObservationTimeScale::mids$ = NULL;
      bool ObservationTimeScale::live$ = false;
      ObservationTimeScale *ObservationTimeScale::BDT = NULL;
      ObservationTimeScale *ObservationTimeScale::GAL = NULL;
      ObservationTimeScale *ObservationTimeScale::GLO = NULL;
      ObservationTimeScale *ObservationTimeScale::GPS = NULL;
      ObservationTimeScale *ObservationTimeScale::IRN = NULL;
      ObservationTimeScale *ObservationTimeScale::QZS = NULL;

      jclass ObservationTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getTimeScale_d429fb7b5ff8192c] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_valueOf_0657edc456f5404c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_values_109cb81c097a63d2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationTimeScale;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BDT = new ObservationTimeScale(env->getStaticObjectField(cls, "BDT", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GAL = new ObservationTimeScale(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GLO = new ObservationTimeScale(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GPS = new ObservationTimeScale(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          IRN = new ObservationTimeScale(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/gnss/ObservationTimeScale;"));
          QZS = new ObservationTimeScale(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeScale ObservationTimeScale::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_d429fb7b5ff8192c], a0.this$));
      }

      ObservationTimeScale ObservationTimeScale::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationTimeScale(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0657edc456f5404c], a0.this$));
      }

      JArray< ObservationTimeScale > ObservationTimeScale::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationTimeScale >(env->callStaticObjectMethod(cls, mids$[mid_values_109cb81c097a63d2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args);
      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg);
      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type);
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data);
      static PyGetSetDef t_ObservationTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationTimeScale, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationTimeScale__methods_[] = {
        DECLARE_METHOD(t_ObservationTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationTimeScale, getTimeScale, METH_O),
        DECLARE_METHOD(t_ObservationTimeScale, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationTimeScale)[] = {
        { Py_tp_methods, t_ObservationTimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationTimeScale, t_ObservationTimeScale, ObservationTimeScale);
      PyObject *t_ObservationTimeScale::wrap_Object(const ObservationTimeScale& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationTimeScale::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationTimeScale), &PY_TYPE_DEF(ObservationTimeScale), module, "ObservationTimeScale", 0);
      }

      void t_ObservationTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "class_", make_descriptor(ObservationTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "wrapfn_", make_descriptor(t_ObservationTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationTimeScale::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "BDT", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::BDT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GAL", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GLO", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GLO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GPS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "IRN", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::IRN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "QZS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::QZS)));
      }

      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationTimeScale::initializeClass, 1)))
          return NULL;
        return t_ObservationTimeScale::wrap_Object(ObservationTimeScale(((t_ObservationTimeScale *) arg)->object.this$));
      }
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationTimeScale result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::valueOf(a0));
          return t_ObservationTimeScale::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type)
      {
        JArray< ObservationTimeScale > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationTimeScale::wrap_jobject);
      }
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Writer.h"
#include "java/io/Flushable.h"
#include "java/lang/CharSequence.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Writer::class$ = NULL;
    jmethodID *Writer::mids$ = NULL;
    bool Writer::live$ = false;

    jclass Writer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Writer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_10b49bc9752a6280] = env->getMethodID(cls, "append", "(C)Ljava/io/Writer;");
        mids$[mid_append_89d85407f8c3f237] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
        mids$[mid_append_36ed35e8f93e8699] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullWriter_6c28d34eccb5e13c] = env->getStaticMethodID(cls, "nullWriter", "()Ljava/io/Writer;");
        mids$[mid_write_dd3f254991df5d48] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_734b91ac30d5f9b4] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d23ba6c655e17478] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_eb74d6dc93e0751e] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Writer Writer::append(jchar a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_10b49bc9752a6280], a0));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_89d85407f8c3f237], a0.this$));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_36ed35e8f93e8699], a0.this$, a1, a2));
    }

    void Writer::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void Writer::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    Writer Writer::nullWriter()
    {
      jclass cls = env->getClass(initializeClass);
      return Writer(env->callStaticObjectMethod(cls, mids$[mid_nullWriter_6c28d34eccb5e13c]));
    }

    void Writer::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_dd3f254991df5d48], a0.this$);
    }

    void Writer::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_734b91ac30d5f9b4], a0.this$);
    }

    void Writer::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void Writer::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d23ba6c655e17478], a0.this$, a1, a2);
    }

    void Writer::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_eb74d6dc93e0751e], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_append(t_Writer *self, PyObject *args);
    static PyObject *t_Writer_close(t_Writer *self);
    static PyObject *t_Writer_flush(t_Writer *self);
    static PyObject *t_Writer_nullWriter(PyTypeObject *type);
    static PyObject *t_Writer_write(t_Writer *self, PyObject *args);

    static PyMethodDef t_Writer__methods_[] = {
      DECLARE_METHOD(t_Writer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, append, METH_VARARGS),
      DECLARE_METHOD(t_Writer, close, METH_NOARGS),
      DECLARE_METHOD(t_Writer, flush, METH_NOARGS),
      DECLARE_METHOD(t_Writer, nullWriter, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Writer, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Writer)[] = {
      { Py_tp_methods, t_Writer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Writer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Writer, t_Writer, Writer);

    void t_Writer::install(PyObject *module)
    {
      installType(&PY_TYPE(Writer), &PY_TYPE_DEF(Writer), module, "Writer", 0);
    }

    void t_Writer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "class_", make_descriptor(Writer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "wrapfn_", make_descriptor(t_Writer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Writer::initializeClass, 1)))
        return NULL;
      return t_Writer::wrap_Object(Writer(((t_Writer *) arg)->object.this$));
    }
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Writer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Writer_append(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Writer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Writer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_Writer_close(t_Writer *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_flush(t_Writer *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_nullWriter(PyTypeObject *type)
    {
      Writer result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Writer::nullWriter());
      return t_Writer::wrap_Object(result);
    }

    static PyObject *t_Writer_write(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *Relativity::class$ = NULL;
        jmethodID *Relativity::mids$ = NULL;
        bool Relativity::live$ = false;

        jclass Relativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/Relativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relativity::Relativity(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Relativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Relativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean Relativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List Relativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args);
        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self);
        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self);
        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data);
        static PyGetSetDef t_Relativity__fields_[] = {
          DECLARE_GET_FIELD(t_Relativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relativity__methods_[] = {
          DECLARE_METHOD(t_Relativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Relativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Relativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relativity)[] = {
          { Py_tp_methods, t_Relativity__methods_ },
          { Py_tp_init, (void *) t_Relativity_init_ },
          { Py_tp_getset, t_Relativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Relativity, t_Relativity, Relativity);

        void t_Relativity::install(PyObject *module)
        {
          installType(&PY_TYPE(Relativity), &PY_TYPE_DEF(Relativity), module, "Relativity", 0);
        }

        void t_Relativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "class_", make_descriptor(Relativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "wrapfn_", make_descriptor(t_Relativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relativity::initializeClass, 1)))
            return NULL;
          return t_Relativity::wrap_Object(Relativity(((t_Relativity *) arg)->object.this$));
        }
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Relativity object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Relativity(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ErrorState::class$ = NULL;
            jmethodID *ErrorState::mids$ = NULL;
            bool ErrorState::live$ = false;

            jclass ErrorState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ErrorState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ErrorState::ErrorState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jboolean ErrorState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg);

            static PyMethodDef t_ErrorState__methods_[] = {
              DECLARE_METHOD(t_ErrorState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ErrorState)[] = {
              { Py_tp_methods, t_ErrorState__methods_ },
              { Py_tp_init, (void *) t_ErrorState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ErrorState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ErrorState, t_ErrorState, ErrorState);

            void t_ErrorState::install(PyObject *module)
            {
              installType(&PY_TYPE(ErrorState), &PY_TYPE_DEF(ErrorState), module, "ErrorState", 0);
            }

            void t_ErrorState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "class_", make_descriptor(ErrorState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "wrapfn_", make_descriptor(t_ErrorState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ErrorState::initializeClass, 1)))
                return NULL;
              return t_ErrorState::wrap_Object(ErrorState(((t_ErrorState *) arg)->object.this$));
            }
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ErrorState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds)
            {
              ErrorState object((jobject) NULL);

              INT_CALL(object = ErrorState());
              self->object = object;

              return 0;
            }

            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_333967efab539499] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_038ef328b98483a2] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getDetector_4cf067cf8dc74d67] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_create_c25ec5db10655848] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::events::FilterType & a1) : ::org::hipparchus::ode::events::AbstractODEDetector(env->newObject(initializeClass, &mids$, mid_init$_333967efab539499, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_038ef328b98483a2], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4cf067cf8dc74d67]));
        }

        void EventSlopeFilter::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractODEDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixFormat::class$ = NULL;
      jmethodID *RealMatrixFormat::mids$ = NULL;
      bool RealMatrixFormat::live$ = false;

      jclass RealMatrixFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_e39b9463875d2aea] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_c96fc87aa2f40e42] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_51220323ff2ddb56] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;)Ljava/lang/String;");
          mids$[mid_format_b0b951c748fccbee] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getColumnSeparator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getColumnSeparator", "()Ljava/lang/String;");
          mids$[mid_getFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealMatrixFormat_45ea15869ae5e87f] = env->getStaticMethodID(cls, "getRealMatrixFormat", "()Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRealMatrixFormat_1a7724022b3f9dd3] = env->getStaticMethodID(cls, "getRealMatrixFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRowPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRowPrefix", "()Ljava/lang/String;");
          mids$[mid_getRowSeparator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRowSeparator", "()Ljava/lang/String;");
          mids$[mid_getRowSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRowSuffix", "()Ljava/lang/String;");
          mids$[mid_getSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_6473eeaad285ae36] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_parse_ed9629889638c09b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrixFormat::RealMatrixFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e39b9463875d2aea, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::text::NumberFormat & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c96fc87aa2f40e42, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::java::lang::String RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_51220323ff2ddb56], a0.this$));
      }

      ::java::lang::StringBuffer RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b0b951c748fccbee], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealMatrixFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      ::java::lang::String RealMatrixFormat::getColumnSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getColumnSeparator_1c1fa1e935d6cdcf]));
      }

      ::java::text::NumberFormat RealMatrixFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_87ffffc449cd25a5]));
      }

      ::java::lang::String RealMatrixFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_1c1fa1e935d6cdcf]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_45ea15869ae5e87f]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_1a7724022b3f9dd3], a0.this$));
      }

      ::java::lang::String RealMatrixFormat::getRowPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowPrefix_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String RealMatrixFormat::getRowSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSeparator_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String RealMatrixFormat::getRowSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSuffix_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String RealMatrixFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_6473eeaad285ae36], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_ed9629889638c09b], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data);
      static PyGetSetDef t_RealMatrixFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrixFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealMatrixFormat, columnSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, prefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, realMatrixFormat),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowPrefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSuffix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrixFormat__methods_[] = {
        DECLARE_METHOD(t_RealMatrixFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getColumnSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRealMatrixFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixFormat)[] = {
        { Py_tp_methods, t_RealMatrixFormat__methods_ },
        { Py_tp_init, (void *) t_RealMatrixFormat_init_ },
        { Py_tp_getset, t_RealMatrixFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixFormat, t_RealMatrixFormat, RealMatrixFormat);

      void t_RealMatrixFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixFormat), &PY_TYPE_DEF(RealMatrixFormat), module, "RealMatrixFormat", 0);
      }

      void t_RealMatrixFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "class_", make_descriptor(RealMatrixFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "wrapfn_", make_descriptor(t_RealMatrixFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixFormat::initializeClass, 1)))
          return NULL;
        return t_RealMatrixFormat::wrap_Object(RealMatrixFormat(((t_RealMatrixFormat *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat object((jobject) NULL);

            INT_CALL(object = RealMatrixFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealMatrixFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            ::java::text::NumberFormat a6((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getColumnSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat());
            return t_RealMatrixFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealMatrixFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat(a0));
              return t_RealMatrixFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealMatrixFormat", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getColumnSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data)
      {
        RealMatrixFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealMatrixFormat());
        return t_RealMatrixFormat::wrap_Object(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSuffix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter::mids$ = NULL;
        bool StreamingCpfWriter::live$ = false;

        jclass StreamingCpfWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5baeda89ba1fd167] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;)V");
            mids$[mid_init$_5e7b9d3abccb7287] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;Z)V");
            mids$[mid_newSegment_1a9b96556317330a] = env->getMethodID(cls, "newSegment", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ilrs/StreamingCpfWriter$Segment;");
            mids$[mid_writeEndOfFile_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writeEndOfFile", "()V");
            mids$[mid_writeHeader_a1fa5dae97ea5ed2] = env->getMethodID(cls, "writeHeader", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5baeda89ba1fd167, a0.this$, a1.this$, a2.this$)) {}

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e7b9d3abccb7287, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::files::ilrs::StreamingCpfWriter$Segment StreamingCpfWriter::newSegment(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::files::ilrs::StreamingCpfWriter$Segment(env->callObjectMethod(this$, mids$[mid_newSegment_1a9b96556317330a], a0.this$));
        }

        void StreamingCpfWriter::writeEndOfFile() const
        {
          env->callVoidMethod(this$, mids$[mid_writeEndOfFile_a1fa5dae97ea5ed2]);
        }

        void StreamingCpfWriter::writeHeader() const
        {
          env->callVoidMethod(this$, mids$[mid_writeHeader_a1fa5dae97ea5ed2]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self);
        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self);

        static PyMethodDef t_StreamingCpfWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, newSegment, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter, writeEndOfFile, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter, writeHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter__methods_ },
          { Py_tp_init, (void *) t_StreamingCpfWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter, t_StreamingCpfWriter, StreamingCpfWriter);

        void t_StreamingCpfWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter), &PY_TYPE_DEF(StreamingCpfWriter), module, "StreamingCpfWriter", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "HeaderLineWriter", make_descriptor(&PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter)));
        }

        void t_StreamingCpfWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "class_", make_descriptor(StreamingCpfWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter::wrap_Object(StreamingCpfWriter(((t_StreamingCpfWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              jboolean a3;
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkkZ", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.newSegment(a0));
            return ::org::orekit::files::ilrs::t_StreamingCpfWriter$Segment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newSegment", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeEndOfFile());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeHeader());
          Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexEopEntry::class$ = NULL;
        jmethodID *SinexEopEntry::mids$ = NULL;
        bool SinexEopEntry::live$ = false;

        jclass SinexEopEntry::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexEopEntry");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLod_b74f83833fdad017] = env->getMethodID(cls, "getLod", "()D");
            mids$[mid_getNutLn_b74f83833fdad017] = env->getMethodID(cls, "getNutLn", "()D");
            mids$[mid_getNutOb_b74f83833fdad017] = env->getMethodID(cls, "getNutOb", "()D");
            mids$[mid_getNutX_b74f83833fdad017] = env->getMethodID(cls, "getNutX", "()D");
            mids$[mid_getNutY_b74f83833fdad017] = env->getMethodID(cls, "getNutY", "()D");
            mids$[mid_getUt1MinusUtc_b74f83833fdad017] = env->getMethodID(cls, "getUt1MinusUtc", "()D");
            mids$[mid_getXPo_b74f83833fdad017] = env->getMethodID(cls, "getXPo", "()D");
            mids$[mid_getYPo_b74f83833fdad017] = env->getMethodID(cls, "getYPo", "()D");
            mids$[mid_setLod_8ba9fe7a847cecad] = env->getMethodID(cls, "setLod", "(D)V");
            mids$[mid_setNutLn_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutLn", "(D)V");
            mids$[mid_setNutOb_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutOb", "(D)V");
            mids$[mid_setNutX_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutX", "(D)V");
            mids$[mid_setNutY_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutY", "(D)V");
            mids$[mid_setUt1MinusUtc_8ba9fe7a847cecad] = env->getMethodID(cls, "setUt1MinusUtc", "(D)V");
            mids$[mid_setxPo_8ba9fe7a847cecad] = env->getMethodID(cls, "setxPo", "(D)V");
            mids$[mid_setyPo_8ba9fe7a847cecad] = env->getMethodID(cls, "setyPo", "(D)V");
            mids$[mid_toEopEntry_5d6fc5e7d7649a1f] = env->getMethodID(cls, "toEopEntry", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/EOPEntry;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexEopEntry::SinexEopEntry(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

        ::org::orekit::time::AbsoluteDate SinexEopEntry::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jdouble SinexEopEntry::getLod() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLod_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getNutLn() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutLn_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getNutOb() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutOb_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getNutX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutX_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getNutY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutY_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getUt1MinusUtc() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUt1MinusUtc_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getXPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXPo_b74f83833fdad017]);
        }

        jdouble SinexEopEntry::getYPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYPo_b74f83833fdad017]);
        }

        void SinexEopEntry::setLod(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLod_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setNutLn(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutLn_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setNutOb(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutOb_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setNutX(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutX_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setNutY(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutY_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setUt1MinusUtc(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setUt1MinusUtc_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setxPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setxPo_8ba9fe7a847cecad], a0);
        }

        void SinexEopEntry::setyPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setyPo_8ba9fe7a847cecad], a0);
        }

        ::org::orekit::frames::EOPEntry SinexEopEntry::toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          return ::org::orekit::frames::EOPEntry(env->callObjectMethod(this$, mids$[mid_toEopEntry_5d6fc5e7d7649a1f], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args);
        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data);
        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyGetSetDef t_SinexEopEntry__fields_[] = {
          DECLARE_GET_FIELD(t_SinexEopEntry, date),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, lod),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutLn),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutOb),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutX),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutY),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, ut1MinusUtc),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, xPo),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, yPo),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexEopEntry__methods_[] = {
          DECLARE_METHOD(t_SinexEopEntry, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getLod, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutLn, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutOb, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutX, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutY, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getUt1MinusUtc, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getXPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getYPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, setLod, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutLn, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutOb, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutX, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutY, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setUt1MinusUtc, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setxPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setyPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, toEopEntry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexEopEntry)[] = {
          { Py_tp_methods, t_SinexEopEntry__methods_ },
          { Py_tp_init, (void *) t_SinexEopEntry_init_ },
          { Py_tp_getset, t_SinexEopEntry__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexEopEntry)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexEopEntry, t_SinexEopEntry, SinexEopEntry);

        void t_SinexEopEntry::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexEopEntry), &PY_TYPE_DEF(SinexEopEntry), module, "SinexEopEntry", 0);
        }

        void t_SinexEopEntry::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "class_", make_descriptor(SinexEopEntry::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "wrapfn_", make_descriptor(t_SinexEopEntry::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexEopEntry::initializeClass, 1)))
            return NULL;
          return t_SinexEopEntry::wrap_Object(SinexEopEntry(((t_SinexEopEntry *) arg)->object.this$));
        }
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexEopEntry::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          SinexEopEntry object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            INT_CALL(object = SinexEopEntry(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLod());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutLn());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutOb());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setLod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLod", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutLn(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutLn", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutOb(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutOb", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutX(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutX", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutY(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutY", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setUt1MinusUtc(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setUt1MinusUtc", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setxPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setxPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setyPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setyPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::TimeScale a2((jobject) NULL);
          ::org::orekit::frames::EOPEntry result((jobject) NULL);

          if (!parseArgs(args, "KKk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.toEopEntry(a0, a1, a2));
            return ::org::orekit::frames::t_EOPEntry::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "toEopEntry", args);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLod());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setLod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lod", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutLn());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutLn(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutLn", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutOb());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutOb(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutOb", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutX());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutX(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutX", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutY());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutY(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutY", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setUt1MinusUtc(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ut1MinusUtc", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setxPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "xPo", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setyPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yPo", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuver::class$ = NULL;
              jmethodID *OrbitManeuver::mids$ = NULL;
              bool OrbitManeuver::live$ = false;

              jclass OrbitManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getAccelerationDirectionSigma_b74f83833fdad017] = env->getMethodID(cls, "getAccelerationDirectionSigma", "()D");
                  mids$[mid_getAccelerationInterpolation_ae5979149ea75603] = env->getMethodID(cls, "getAccelerationInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getAccelerationMagnitudeSigma_b74f83833fdad017] = env->getMethodID(cls, "getAccelerationMagnitudeSigma", "()D");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDeltaMass_b74f83833fdad017] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDeployDirSigma_b74f83833fdad017] = env->getMethodID(cls, "getDeployDirSigma", "()D");
                  mids$[mid_getDeployDv_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDeployDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeployDvCda_b74f83833fdad017] = env->getMethodID(cls, "getDeployDvCda", "()D");
                  mids$[mid_getDeployDvRatio_b74f83833fdad017] = env->getMethodID(cls, "getDeployDvRatio", "()D");
                  mids$[mid_getDeployDvSigma_b74f83833fdad017] = env->getMethodID(cls, "getDeployDvSigma", "()D");
                  mids$[mid_getDeployId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDeployId", "()Ljava/lang/String;");
                  mids$[mid_getDeployMass_b74f83833fdad017] = env->getMethodID(cls, "getDeployMass", "()D");
                  mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getDv_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDvDirSigma_b74f83833fdad017] = env->getMethodID(cls, "getDvDirSigma", "()D");
                  mids$[mid_getDvMagSigma_b74f83833fdad017] = env->getMethodID(cls, "getDvMagSigma", "()D");
                  mids$[mid_getThrust_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrust", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getThrustDirectionSigma_b74f83833fdad017] = env->getMethodID(cls, "getThrustDirectionSigma", "()D");
                  mids$[mid_getThrustEfficiency_b74f83833fdad017] = env->getMethodID(cls, "getThrustEfficiency", "()D");
                  mids$[mid_getThrustInterpolation_ae5979149ea75603] = env->getMethodID(cls, "getThrustInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getThrustIsp_b74f83833fdad017] = env->getMethodID(cls, "getThrustIsp", "()D");
                  mids$[mid_getThrustMagnitudeSigma_b74f83833fdad017] = env->getMethodID(cls, "getThrustMagnitudeSigma", "()D");
                  mids$[mid_setAcceleration_d5322b8b512aeb26] = env->getMethodID(cls, "setAcceleration", "(ID)V");
                  mids$[mid_setAccelerationDirectionSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setAccelerationDirectionSigma", "(D)V");
                  mids$[mid_setAccelerationInterpolation_9e83239fe51dc6dd] = env->getMethodID(cls, "setAccelerationInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setAccelerationMagnitudeSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setAccelerationMagnitudeSigma", "(D)V");
                  mids$[mid_setDate_02135a6ef25adb4b] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDeltaMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDeployDirSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeployDirSigma", "(D)V");
                  mids$[mid_setDeployDv_d5322b8b512aeb26] = env->getMethodID(cls, "setDeployDv", "(ID)V");
                  mids$[mid_setDeployDvCda_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeployDvCda", "(D)V");
                  mids$[mid_setDeployDvRatio_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeployDvRatio", "(D)V");
                  mids$[mid_setDeployDvSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeployDvSigma", "(D)V");
                  mids$[mid_setDeployId_734b91ac30d5f9b4] = env->getMethodID(cls, "setDeployId", "(Ljava/lang/String;)V");
                  mids$[mid_setDeployMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeployMass", "(D)V");
                  mids$[mid_setDuration_8ba9fe7a847cecad] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setDv_d5322b8b512aeb26] = env->getMethodID(cls, "setDv", "(ID)V");
                  mids$[mid_setDvDirSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setDvDirSigma", "(D)V");
                  mids$[mid_setDvMagSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setDvMagSigma", "(D)V");
                  mids$[mid_setThrust_d5322b8b512aeb26] = env->getMethodID(cls, "setThrust", "(ID)V");
                  mids$[mid_setThrustDirectionSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setThrustDirectionSigma", "(D)V");
                  mids$[mid_setThrustEfficiency_8ba9fe7a847cecad] = env->getMethodID(cls, "setThrustEfficiency", "(D)V");
                  mids$[mid_setThrustInterpolation_9e83239fe51dc6dd] = env->getMethodID(cls, "setThrustInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setThrustIsp_8ba9fe7a847cecad] = env->getMethodID(cls, "setThrustIsp", "(D)V");
                  mids$[mid_setThrustMagnitudeSigma_8ba9fe7a847cecad] = env->getMethodID(cls, "setThrustMagnitudeSigma", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuver::OrbitManeuver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getAcceleration() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_8b724f8b4fdad1a2]));
              }

              jdouble OrbitManeuver::getAccelerationDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationDirectionSigma_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getAccelerationInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getAccelerationInterpolation_ae5979149ea75603]));
              }

              jdouble OrbitManeuver::getAccelerationMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationMagnitudeSigma_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuver::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              jdouble OrbitManeuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getDeployDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDirSigma_b74f83833fdad017]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDeployDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeployDv_8b724f8b4fdad1a2]));
              }

              jdouble OrbitManeuver::getDeployDvCda() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvCda_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getDeployDvRatio() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvRatio_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getDeployDvSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvSigma_b74f83833fdad017]);
              }

              ::java::lang::String OrbitManeuver::getDeployId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeployId_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitManeuver::getDeployMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployMass_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDv_8b724f8b4fdad1a2]));
              }

              jdouble OrbitManeuver::getDvDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvDirSigma_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getDvMagSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvMagSigma_b74f83833fdad017]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getThrust() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrust_8b724f8b4fdad1a2]));
              }

              jdouble OrbitManeuver::getThrustDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustDirectionSigma_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getThrustEfficiency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustEfficiency_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getThrustInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getThrustInterpolation_ae5979149ea75603]));
              }

              jdouble OrbitManeuver::getThrustIsp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustIsp_b74f83833fdad017]);
              }

              jdouble OrbitManeuver::getThrustMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitudeSigma_b74f83833fdad017]);
              }

              void OrbitManeuver::setAcceleration(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcceleration_d5322b8b512aeb26], a0, a1);
              }

              void OrbitManeuver::setAccelerationDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationDirectionSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationInterpolation_9e83239fe51dc6dd], a0.this$);
              }

              void OrbitManeuver::setAccelerationMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationMagnitudeSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDate_02135a6ef25adb4b], a0.this$);
              }

              void OrbitManeuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDeployDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDirSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDeployDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDv_d5322b8b512aeb26], a0, a1);
              }

              void OrbitManeuver::setDeployDvCda(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvCda_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDeployDvRatio(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvRatio_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDeployDvSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDeployId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployId_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitManeuver::setDeployMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployMass_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDv_d5322b8b512aeb26], a0, a1);
              }

              void OrbitManeuver::setDvDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvDirSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setDvMagSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvMagSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setThrust(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrust_d5322b8b512aeb26], a0, a1);
              }

              void OrbitManeuver::setThrustDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustDirectionSigma_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setThrustEfficiency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustEfficiency_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustInterpolation_9e83239fe51dc6dd], a0.this$);
              }

              void OrbitManeuver::setThrustIsp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustIsp_8ba9fe7a847cecad], a0);
              }

              void OrbitManeuver::setThrustMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustMagnitudeSigma_8ba9fe7a847cecad], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuver__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuver, acceleration),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationMagnitudeSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, date),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deltaMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDirSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, deployDv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvCda),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvRatio),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployId),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, duration),
                DECLARE_GET_FIELD(t_OrbitManeuver, dv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvDirSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvMagSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, thrust),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustEfficiency),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustIsp),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustMagnitudeSigma),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuver__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, getAcceleration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvCda, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvRatio, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvMagSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustEfficiency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustIsp, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAcceleration, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationMagnitudeSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDate, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvCda, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvRatio, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployId, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDvDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDvMagSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrust, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setThrustDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustEfficiency, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustIsp, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustMagnitudeSigma, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuver)[] = {
                { Py_tp_methods, t_OrbitManeuver__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuver_init_ },
                { Py_tp_getset, t_OrbitManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuver)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuver, t_OrbitManeuver, OrbitManeuver);

              void t_OrbitManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuver), &PY_TYPE_DEF(OrbitManeuver), module, "OrbitManeuver", 0);
              }

              void t_OrbitManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "class_", make_descriptor(OrbitManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "wrapfn_", make_descriptor(t_OrbitManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuver::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuver::wrap_Object(OrbitManeuver(((t_OrbitManeuver *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds)
              {
                OrbitManeuver object((jobject) NULL);

                INT_CALL(object = OrbitManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployId());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setAcceleration(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcceleration", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setAccelerationInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDate", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDeployDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvCda(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvCda", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvRatio(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvRatio", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setDeployId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployId", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvMagSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvMagSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setThrust(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrust", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustEfficiency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustEfficiency", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setThrustInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustIsp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustIsp", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccelerationInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationMagnitudeSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "date", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvCda(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvCda", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvRatio(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvRatio", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployId());
                return j2p(value);
              }
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setDeployId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployId", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvMagSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvMagSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustEfficiency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustEfficiency", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setThrustInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustIsp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustIsp", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustMagnitudeSigma", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPHistoryLoader::class$ = NULL;
      jmethodID *PythonEOPHistoryLoader::mids$ = NULL;
      bool PythonEOPHistoryLoader::live$ = false;

      jclass PythonEOPHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fillHistory_f091b90ef4456eb3] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPHistoryLoader::PythonEOPHistoryLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonEOPHistoryLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonEOPHistoryLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonEOPHistoryLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self);
      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args);
      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data);
      static PyGetSetDef t_PythonEOPHistoryLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPHistoryLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_PythonEOPHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPHistoryLoader)[] = {
        { Py_tp_methods, t_PythonEOPHistoryLoader__methods_ },
        { Py_tp_init, (void *) t_PythonEOPHistoryLoader_init_ },
        { Py_tp_getset, t_PythonEOPHistoryLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPHistoryLoader, t_PythonEOPHistoryLoader, PythonEOPHistoryLoader);

      void t_PythonEOPHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPHistoryLoader), &PY_TYPE_DEF(PythonEOPHistoryLoader), module, "PythonEOPHistoryLoader", 1);
      }

      void t_PythonEOPHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "class_", make_descriptor(PythonEOPHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "wrapfn_", make_descriptor(t_PythonEOPHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPHistoryLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V", (void *) t_PythonEOPHistoryLoader_fillHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPHistoryLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_PythonEOPHistoryLoader::wrap_Object(PythonEOPHistoryLoader(((t_PythonEOPHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPHistoryLoader object((jobject) NULL);

        INT_CALL(object = PythonEOPHistoryLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(::org::orekit::utils::IERSConventions$NutationCorrectionConverter(a0));
        PyObject *o1 = ::java::util::t_SortedSet::wrap_Object(::java::util::SortedSet(a1));
        PyObject *result = PyObject_CallMethod(obj, "fillHistory", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
