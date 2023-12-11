#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractUnivariateStatistic::mids$ = NULL;
        bool AbstractUnivariateStatistic::live$ = false;

        jclass AbstractUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_98b5288d1f202841] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_557b8123390d8d0c] = env->getMethodID(cls, "evaluate", "()D");
            mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getData_a53a7513ecedada2] = env->getMethodID(cls, "getData", "()[D");
            mids$[mid_setData_cc18240f4a737f14] = env->getMethodID(cls, "setData", "([D)V");
            mids$[mid_setData_91b51b3c05127ead] = env->getMethodID(cls, "setData", "([DII)V");
            mids$[mid_getDataRef_a53a7513ecedada2] = env->getMethodID(cls, "getDataRef", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::descriptive::UnivariateStatistic AbstractUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_98b5288d1f202841]));
        }

        jdouble AbstractUnivariateStatistic::evaluate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_557b8123390d8d0c]);
        }

        jdouble AbstractUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
        }

        JArray< jdouble > AbstractUnivariateStatistic::getData() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getData_a53a7513ecedada2]));
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_cc18240f4a737f14], a0.this$);
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_91b51b3c05127ead], a0.this$, a1, a2);
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
    namespace stat {
      namespace descriptive {
        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data);
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractUnivariateStatistic__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractUnivariateStatistic, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, getData, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, setData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateStatistic, t_AbstractUnivariateStatistic, AbstractUnivariateStatistic);

        void t_AbstractUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateStatistic), &PY_TYPE_DEF(AbstractUnivariateStatistic), module, "AbstractUnivariateStatistic", 0);
        }

        void t_AbstractUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "class_", make_descriptor(AbstractUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateStatistic::wrap_Object(AbstractUnivariateStatistic(((t_AbstractUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.evaluate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return result.wrap();
        }

        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.setData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setData", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return value.wrap();
        }
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setData(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "data", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frame::class$ = NULL;
      jmethodID *Frame::mids$ = NULL;
      bool Frame::live$ = false;

      jclass Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d8cb329c586d12d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_544a46f568cb82e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;)V");
          mids$[mid_init$_616b39805dc3fd53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_init$_bf7d1562b348c3f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;Z)V");
          mids$[mid_getAncestor_afa0c8dddbea8501] = env->getMethodID(cls, "getAncestor", "(I)Lorg/orekit/frames/Frame;");
          mids$[mid_getDepth_412668abc8d889e9] = env->getMethodID(cls, "getDepth", "()I");
          mids$[mid_getFrozenFrame_3ca3ca1c6544a8cc] = env->getMethodID(cls, "getFrozenFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getParent_6c9bc0a928c56d4e] = env->getMethodID(cls, "getParent", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRoot_6c9bc0a928c56d4e] = env->getStaticMethodID(cls, "getRoot", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getStaticTransformTo_7a25a52eda73c1be] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransformTo_26fe8228a784e36b] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransformProvider_5b1059d129debef8] = env->getMethodID(cls, "getTransformProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getTransformTo_0c8fad60d8b4d965] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransformTo_b55ae1e761b9de03] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_isChildOf_f73c6a4bba5acc20] = env->getMethodID(cls, "isChildOf", "(Lorg/orekit/frames/Frame;)Z");
          mids$[mid_isPseudoInertial_89b302893bdbe1f1] = env->getMethodID(cls, "isPseudoInertial", "()Z");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8cb329c586d12d2, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_544a46f568cb82e6, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_616b39805dc3fd53, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf7d1562b348c3f4, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame Frame::getAncestor(jint a0) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getAncestor_afa0c8dddbea8501], a0));
      }

      jint Frame::getDepth() const
      {
        return env->callIntMethod(this$, mids$[mid_getDepth_412668abc8d889e9]);
      }

      Frame Frame::getFrozenFrame(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::java::lang::String & a2) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getFrozenFrame_3ca3ca1c6544a8cc], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String Frame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      Frame Frame::getParent() const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getParent_6c9bc0a928c56d4e]));
      }

      Frame Frame::getRoot()
      {
        jclass cls = env->getClass(initializeClass);
        return Frame(env->callStaticObjectMethod(cls, mids$[mid_getRoot_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::StaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_7a25a52eda73c1be], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldStaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_26fe8228a784e36b], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider Frame::getTransformProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getTransformProvider_5b1059d129debef8]));
      }

      ::org::orekit::frames::Transform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransformTo_0c8fad60d8b4d965], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransformTo_b55ae1e761b9de03], a0.this$, a1.this$));
      }

      jboolean Frame::isChildOf(const Frame & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isChildOf_f73c6a4bba5acc20], a0.this$);
      }

      jboolean Frame::isPseudoInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPseudoInertial_89b302893bdbe1f1]);
      }

      ::java::lang::String Frame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_getDepth(t_Frame *self);
      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getName(t_Frame *self);
      static PyObject *t_Frame_getParent(t_Frame *self);
      static PyObject *t_Frame_getRoot(PyTypeObject *type);
      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getTransformProvider(t_Frame *self);
      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_isPseudoInertial(t_Frame *self);
      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_get__depth(t_Frame *self, void *data);
      static PyObject *t_Frame_get__name(t_Frame *self, void *data);
      static PyObject *t_Frame_get__parent(t_Frame *self, void *data);
      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data);
      static PyObject *t_Frame_get__root(t_Frame *self, void *data);
      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data);
      static PyGetSetDef t_Frame__fields_[] = {
        DECLARE_GET_FIELD(t_Frame, depth),
        DECLARE_GET_FIELD(t_Frame, name),
        DECLARE_GET_FIELD(t_Frame, parent),
        DECLARE_GET_FIELD(t_Frame, pseudoInertial),
        DECLARE_GET_FIELD(t_Frame, root),
        DECLARE_GET_FIELD(t_Frame, transformProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frame__methods_[] = {
        DECLARE_METHOD(t_Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, getAncestor, METH_O),
        DECLARE_METHOD(t_Frame, getDepth, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getFrozenFrame, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getParent, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getRoot, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Frame, getStaticTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getTransformProvider, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, isChildOf, METH_O),
        DECLARE_METHOD(t_Frame, isPseudoInertial, METH_NOARGS),
        DECLARE_METHOD(t_Frame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frame)[] = {
        { Py_tp_methods, t_Frame__methods_ },
        { Py_tp_init, (void *) t_Frame_init_ },
        { Py_tp_getset, t_Frame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frame, t_Frame, Frame);

      void t_Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(Frame), &PY_TYPE_DEF(Frame), module, "Frame", 0);
      }

      void t_Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "class_", make_descriptor(Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "wrapfn_", make_descriptor(t_Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frame::initializeClass, 1)))
          return NULL;
        return t_Frame::wrap_Object(Frame(((t_Frame *) arg)->object.this$));
      }
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
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

      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg)
      {
        jint a0;
        Frame result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getAncestor(a0));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAncestor", arg);
        return NULL;
      }

      static PyObject *t_Frame_getDepth(t_Frame *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDepth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args)
      {
        Frame a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        Frame result((jobject) NULL);

        if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getFrozenFrame(a0, a1, a2));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrozenFrame", args);
        return NULL;
      }

      static PyObject *t_Frame_getName(t_Frame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frame_getParent(t_Frame *self)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getParent());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getRoot(PyTypeObject *type)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Frame::getRoot());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_getTransformProvider(t_Frame *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg)
      {
        Frame a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isChildOf(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isChildOf", arg);
        return NULL;
      }

      static PyObject *t_Frame_isPseudoInertial(t_Frame *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPseudoInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frame_get__depth(t_Frame *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDepth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Frame_get__name(t_Frame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frame_get__parent(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getParent());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPseudoInertial());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Frame_get__root(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoot());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnDecreasing::class$ = NULL;
          jmethodID *FieldStopOnDecreasing::mids$ = NULL;
          bool FieldStopOnDecreasing::live$ = false;

          jclass FieldStopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnDecreasing::FieldStopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnDecreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args);
          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnDecreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnDecreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnDecreasing)[] = {
            { Py_tp_methods, t_FieldStopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnDecreasing_init_ },
            { Py_tp_getset, t_FieldStopOnDecreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnDecreasing, t_FieldStopOnDecreasing, FieldStopOnDecreasing);
          PyObject *t_FieldStopOnDecreasing::wrap_Object(const FieldStopOnDecreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnDecreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnDecreasing), &PY_TYPE_DEF(FieldStopOnDecreasing), module, "FieldStopOnDecreasing", 0);
          }

          void t_FieldStopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "class_", make_descriptor(FieldStopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "wrapfn_", make_descriptor(t_FieldStopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnDecreasing::wrap_Object(FieldStopOnDecreasing(((t_FieldStopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnDecreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$TimeSystemConsumer::class$ = NULL;
            jmethodID *ParseToken$TimeSystemConsumer::mids$ = NULL;
            bool ParseToken$TimeSystemConsumer::live$ = false;

            jclass ParseToken$TimeSystemConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_dcfc8f760c17d3b6] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$TimeSystemConsumer::accept(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_dcfc8f760c17d3b6], a0.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$TimeSystemConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$TimeSystemConsumer)[] = {
              { Py_tp_methods, t_ParseToken$TimeSystemConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$TimeSystemConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$TimeSystemConsumer, t_ParseToken$TimeSystemConsumer, ParseToken$TimeSystemConsumer);

            void t_ParseToken$TimeSystemConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$TimeSystemConsumer), &PY_TYPE_DEF(ParseToken$TimeSystemConsumer), module, "ParseToken$TimeSystemConsumer", 0);
            }

            void t_ParseToken$TimeSystemConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "class_", make_descriptor(ParseToken$TimeSystemConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "wrapfn_", make_descriptor(t_ParseToken$TimeSystemConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$TimeSystemConsumer::wrap_Object(ParseToken$TimeSystemConsumer(((t_ParseToken$TimeSystemConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Iterator::class$ = NULL;
    jmethodID *Iterator::mids$ = NULL;
    bool Iterator::live$ = false;

    jclass Iterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Iterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_hasNext_89b302893bdbe1f1] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_next_e661fe3ba2fafb22] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_remove_0640e6acf969ed28] = env->getMethodID(cls, "remove", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Iterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_89b302893bdbe1f1]);
    }

    ::java::lang::Object Iterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_e661fe3ba2fafb22]));
    }

    void Iterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args);
    static PyObject *t_Iterator_hasNext(t_Iterator *self);
    static PyObject *t_Iterator_next(t_Iterator *self);
    static PyObject *t_Iterator_remove(t_Iterator *self);
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data);
    static PyGetSetDef t_Iterator__fields_[] = {
      DECLARE_GET_FIELD(t_Iterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterator__methods_[] = {
      DECLARE_METHOD(t_Iterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterator, hasNext, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, next, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, remove, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterator)[] = {
      { Py_tp_methods, t_Iterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterator, t_Iterator, Iterator);
    PyObject *t_Iterator::wrap_Object(const Iterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterator), &PY_TYPE_DEF(Iterator), module, "Iterator", 0);
    }

    void t_Iterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "class_", make_descriptor(Iterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "wrapfn_", make_descriptor(t_Iterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterator::initializeClass, 1)))
        return NULL;
      return t_Iterator::wrap_Object(Iterator(((t_Iterator *) arg)->object.this$));
    }
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterator_hasNext(t_Iterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasNext());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Iterator_next(t_Iterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.next());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Iterator_remove(t_Iterator *self)
    {
      OBJ_CALL(self->object.remove());
      Py_RETURN_NONE;
    }
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCombination::class$ = NULL;
          jmethodID *PhaseMinusCodeCombination::mids$ = NULL;
          bool PhaseMinusCodeCombination::live$ = false;

          jclass PhaseMinusCodeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_2268d18be49a6087] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace gnss {
          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PhaseMinusCodeCombination__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCombination)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCombination, t_PhaseMinusCodeCombination, PhaseMinusCodeCombination);

          void t_PhaseMinusCodeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCombination), &PY_TYPE_DEF(PhaseMinusCodeCombination), module, "PhaseMinusCodeCombination", 0);
          }

          void t_PhaseMinusCodeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "class_", make_descriptor(PhaseMinusCodeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "wrapfn_", make_descriptor(t_PhaseMinusCodeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCombination::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCombination::wrap_Object(PhaseMinusCodeCombination(((t_PhaseMinusCodeCombination *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MendesPavlisModel::class$ = NULL;
          jmethodID *MendesPavlisModel::mids$ = NULL;
          bool MendesPavlisModel::live$ = false;

          jclass MendesPavlisModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MendesPavlisModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_computeZenithDelay_fd96fda04d407b93] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_006dc50aa6e193b5] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_8facfaf27f8256a8] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MendesPavlisModel;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MendesPavlisModel::MendesPavlisModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

          JArray< jdouble > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_fd96fda04d407b93], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_006dc50aa6e193b5], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List MendesPavlisModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          MendesPavlisModel MendesPavlisModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MendesPavlisModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_8facfaf27f8256a8], a0));
          }

          JArray< jdouble > MendesPavlisModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement MendesPavlisModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble MendesPavlisModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self);
          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data);
          static PyGetSetDef t_MendesPavlisModel__fields_[] = {
            DECLARE_GET_FIELD(t_MendesPavlisModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MendesPavlisModel__methods_[] = {
            DECLARE_METHOD(t_MendesPavlisModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MendesPavlisModel)[] = {
            { Py_tp_methods, t_MendesPavlisModel__methods_ },
            { Py_tp_init, (void *) t_MendesPavlisModel_init_ },
            { Py_tp_getset, t_MendesPavlisModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MendesPavlisModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MendesPavlisModel, t_MendesPavlisModel, MendesPavlisModel);

          void t_MendesPavlisModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MendesPavlisModel), &PY_TYPE_DEF(MendesPavlisModel), module, "MendesPavlisModel", 0);
          }

          void t_MendesPavlisModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "class_", make_descriptor(MendesPavlisModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "wrapfn_", make_descriptor(t_MendesPavlisModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MendesPavlisModel::initializeClass, 1)))
              return NULL;
            return t_MendesPavlisModel::wrap_Object(MendesPavlisModel(((t_MendesPavlisModel *) arg)->object.this$));
          }
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MendesPavlisModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MendesPavlisModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MendesPavlisModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MendesPavlisModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MendesPavlisModel::getStandardModel(a0));
              return t_MendesPavlisModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarN::class$ = NULL;
          jmethodID *CopolarN::mids$ = NULL;
          bool CopolarN::live$ = false;

          jclass CopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_557b8123390d8d0c] = env->getMethodID(cls, "cn", "()D");
              mids$[mid_dn_557b8123390d8d0c] = env->getMethodID(cls, "dn", "()D");
              mids$[mid_sn_557b8123390d8d0c] = env->getMethodID(cls, "sn", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarN::cn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cn_557b8123390d8d0c]);
          }

          jdouble CopolarN::dn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dn_557b8123390d8d0c]);
          }

          jdouble CopolarN::sn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sn_557b8123390d8d0c]);
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_cn(t_CopolarN *self);
          static PyObject *t_CopolarN_dn(t_CopolarN *self);
          static PyObject *t_CopolarN_sn(t_CopolarN *self);

          static PyMethodDef t_CopolarN__methods_[] = {
            DECLARE_METHOD(t_CopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarN)[] = {
            { Py_tp_methods, t_CopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarN, t_CopolarN, CopolarN);

          void t_CopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarN), &PY_TYPE_DEF(CopolarN), module, "CopolarN", 0);
          }

          void t_CopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "class_", make_descriptor(CopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "wrapfn_", make_descriptor(t_CopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarN::initializeClass, 1)))
              return NULL;
            return t_CopolarN::wrap_Object(CopolarN(((t_CopolarN *) arg)->object.this$));
          }
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarN_cn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_dn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_sn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sn());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Differentiation.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/StateFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Differentiation::class$ = NULL;
      jmethodID *Differentiation::mids$ = NULL;
      bool Differentiation::live$ = false;

      jclass Differentiation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Differentiation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_differentiate_c0cb8064a9afc22d] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/ParameterFunction;ID)Lorg/orekit/utils/ParameterFunction;");
          mids$[mid_differentiate_e57182f3d8f272dd] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/StateFunction;ILorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DI)Lorg/orekit/utils/StateJacobian;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ParameterFunction Differentiation::differentiate(const ::org::orekit::utils::ParameterFunction & a0, jint a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::ParameterFunction(env->callStaticObjectMethod(cls, mids$[mid_differentiate_c0cb8064a9afc22d], a0.this$, a1, a2));
      }

      ::org::orekit::utils::StateJacobian Differentiation::differentiate(const ::org::orekit::utils::StateFunction & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4, jdouble a5, jint a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::StateJacobian(env->callStaticObjectMethod(cls, mids$[mid_differentiate_e57182f3d8f272dd], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5, a6));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Differentiation__methods_[] = {
        DECLARE_METHOD(t_Differentiation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, differentiate, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Differentiation)[] = {
        { Py_tp_methods, t_Differentiation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Differentiation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Differentiation, t_Differentiation, Differentiation);

      void t_Differentiation::install(PyObject *module)
      {
        installType(&PY_TYPE(Differentiation), &PY_TYPE_DEF(Differentiation), module, "Differentiation", 0);
      }

      void t_Differentiation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "class_", make_descriptor(Differentiation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "wrapfn_", make_descriptor(t_Differentiation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Differentiation::initializeClass, 1)))
          return NULL;
        return t_Differentiation::wrap_Object(Differentiation(((t_Differentiation *) arg)->object.this$));
      }
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Differentiation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::ParameterFunction a0((jobject) NULL);
            jint a1;
            jdouble a2;
            ::org::orekit::utils::ParameterFunction result((jobject) NULL);

            if (!parseArgs(args, "kID", ::org::orekit::utils::ParameterFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2));
              return ::org::orekit::utils::t_ParameterFunction::wrap_Object(result);
            }
          }
          break;
         case 7:
          {
            ::org::orekit::utils::StateFunction a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            jint a6;
            ::org::orekit::utils::StateJacobian result((jobject) NULL);

            if (!parseArgs(args, "kIkKKDI", ::org::orekit::utils::StateFunction::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2, a3, a4, a5, a6));
              return ::org::orekit::utils::t_StateJacobian::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "differentiate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ParetoDistribution::class$ = NULL;
        jmethodID *ParetoDistribution::mids$ = NULL;
        bool ParetoDistribution::live$ = false;

        jclass ParetoDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ParetoDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_557b8123390d8d0c] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParetoDistribution::ParetoDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble ParetoDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble ParetoDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble ParetoDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble ParetoDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble ParetoDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble ParetoDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_557b8123390d8d0c]);
        }

        jdouble ParetoDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble ParetoDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean ParetoDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble ParetoDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data);
        static PyGetSetDef t_ParetoDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ParetoDistribution, scale),
          DECLARE_GET_FIELD(t_ParetoDistribution, shape),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParetoDistribution__methods_[] = {
          DECLARE_METHOD(t_ParetoDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParetoDistribution)[] = {
          { Py_tp_methods, t_ParetoDistribution__methods_ },
          { Py_tp_init, (void *) t_ParetoDistribution_init_ },
          { Py_tp_getset, t_ParetoDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParetoDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ParetoDistribution, t_ParetoDistribution, ParetoDistribution);

        void t_ParetoDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ParetoDistribution), &PY_TYPE_DEF(ParetoDistribution), module, "ParetoDistribution", 0);
        }

        void t_ParetoDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "class_", make_descriptor(ParetoDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "wrapfn_", make_descriptor(t_ParetoDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParetoDistribution::initializeClass, 1)))
            return NULL;
          return t_ParetoDistribution::wrap_Object(ParetoDistribution(((t_ParetoDistribution *) arg)->object.this$));
        }
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParetoDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ParetoDistribution object((jobject) NULL);

              INT_CALL(object = ParetoDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ParetoDistribution(a0, a1));
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
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ParetoDistribution(a0, a1, a2));
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

        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *ShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *ShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool ShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass ShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_0fd0d5413261aea6] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/AbsoluteDate;[D)V");
                mids$[mid_clearHistory_0640e6acf969ed28] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_89e8b78e4211e023] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ShortPeriodicsInterpolatedCoefficient::ShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            void ShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_0fd0d5413261aea6], a0.this$, a1.this$);
            }

            void ShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_0640e6acf969ed28]);
            }

            JArray< jdouble > ShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_89e8b78e4211e023], a0.this$));
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
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);

            static PyMethodDef t_ShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_ShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_ShortPeriodicsInterpolatedCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodicsInterpolatedCoefficient, t_ShortPeriodicsInterpolatedCoefficient, ShortPeriodicsInterpolatedCoefficient);

            void t_ShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient), module, "ShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_ShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(ShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_ShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodicsInterpolatedCoefficient::wrap_Object(ShortPeriodicsInterpolatedCoefficient(((t_ShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = ShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
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
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonAbstractEncodedMessage::class$ = NULL;
          jmethodID *PythonAbstractEncodedMessage::mids$ = NULL;
          bool PythonAbstractEncodedMessage::live$ = false;

          jclass PythonAbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractEncodedMessage::PythonAbstractEncodedMessage() : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonAbstractEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractEncodedMessage::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self);
          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args);
          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonAbstractEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncodedMessage)[] = {
            { Py_tp_methods, t_PythonAbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractEncodedMessage_init_ },
            { Py_tp_getset, t_PythonAbstractEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(PythonAbstractEncodedMessage, t_PythonAbstractEncodedMessage, PythonAbstractEncodedMessage);

          void t_PythonAbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractEncodedMessage), &PY_TYPE_DEF(PythonAbstractEncodedMessage), module, "PythonAbstractEncodedMessage", 1);
          }

          void t_PythonAbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "class_", make_descriptor(PythonAbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "wrapfn_", make_descriptor(t_PythonAbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "fetchByte", "()I", (void *) t_PythonAbstractEncodedMessage_fetchByte0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractEncodedMessage::wrap_Object(PythonAbstractEncodedMessage(((t_PythonAbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonAbstractEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args)
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

          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "fetchByte", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("fetchByte", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPForceModel::class$ = NULL;
          jmethodID *CR3BPForceModel::mids$ = NULL;
          bool CR3BPForceModel::live$ = false;
          ::java::lang::String *CR3BPForceModel::MASS_RATIO_SUFFIX = NULL;

          jclass CR3BPForceModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPForceModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f1c6590d5c8242d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPotential_316960e77ea8548e] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
              mids$[mid_getPotential_e9a60de26ad5a3a8] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MASS_RATIO_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MASS_RATIO_SUFFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPForceModel::CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c6590d5c8242d6, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
          }

          jboolean CR3BPForceModel::dependsOnPositionOnly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
          }

          ::java::util::List CR3BPForceModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_316960e77ea8548e], a0.this$));
          }

          ::org::hipparchus::analysis::differentiation::DerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_e9a60de26ad5a3a8], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data);
          static PyGetSetDef t_CR3BPForceModel__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPForceModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPForceModel__methods_[] = {
            DECLARE_METHOD(t_CR3BPForceModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, acceleration, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPForceModel, dependsOnPositionOnly, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getPotential, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPForceModel)[] = {
            { Py_tp_methods, t_CR3BPForceModel__methods_ },
            { Py_tp_init, (void *) t_CR3BPForceModel_init_ },
            { Py_tp_getset, t_CR3BPForceModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPForceModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPForceModel, t_CR3BPForceModel, CR3BPForceModel);

          void t_CR3BPForceModel::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPForceModel), &PY_TYPE_DEF(CR3BPForceModel), module, "CR3BPForceModel", 0);
          }

          void t_CR3BPForceModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "class_", make_descriptor(CR3BPForceModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "wrapfn_", make_descriptor(t_CR3BPForceModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(CR3BPForceModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "MASS_RATIO_SUFFIX", make_descriptor(j2p(*CR3BPForceModel::MASS_RATIO_SUFFIX)));
          }

          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPForceModel::initializeClass, 1)))
              return NULL;
            return t_CR3BPForceModel::wrap_Object(CR3BPForceModel(((t_CR3BPForceModel *) arg)->object.this$));
          }
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPForceModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            CR3BPForceModel object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = CR3BPForceModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args)
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

          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.dependsOnPositionOnly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getPotential", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedGenerator::class$ = NULL;
      jmethodID *TimeStampedGenerator::mids$ = NULL;
      bool TimeStampedGenerator::live$ = false;

      jclass TimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_generate_c5683b8e06424542] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List TimeStampedGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_c5683b8e06424542], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data);
      static PyGetSetDef t_TimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedGenerator)[] = {
        { Py_tp_methods, t_TimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedGenerator, t_TimeStampedGenerator, TimeStampedGenerator);
      PyObject *t_TimeStampedGenerator::wrap_Object(const TimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedGenerator), &PY_TYPE_DEF(TimeStampedGenerator), module, "TimeStampedGenerator", 0);
      }

      void t_TimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "class_", make_descriptor(TimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "wrapfn_", make_descriptor(t_TimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedGenerator::wrap_Object(TimeStampedGenerator(((t_TimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Identity::class$ = NULL;
        jmethodID *Identity::mids$ = NULL;
        bool Identity::live$ = false;

        jclass Identity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Identity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Identity::Identity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Identity::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Identity::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Identity_value(t_Identity *self, PyObject *args);

        static PyMethodDef t_Identity__methods_[] = {
          DECLARE_METHOD(t_Identity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Identity)[] = {
          { Py_tp_methods, t_Identity__methods_ },
          { Py_tp_init, (void *) t_Identity_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Identity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Identity, t_Identity, Identity);

        void t_Identity::install(PyObject *module)
        {
          installType(&PY_TYPE(Identity), &PY_TYPE_DEF(Identity), module, "Identity", 0);
        }

        void t_Identity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "class_", make_descriptor(Identity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "wrapfn_", make_descriptor(t_Identity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Identity::initializeClass, 1)))
            return NULL;
          return t_Identity::wrap_Object(Identity(((t_Identity *) arg)->object.this$));
        }
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Identity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds)
        {
          Identity object((jobject) NULL);

          INT_CALL(object = Identity());
          self->object = object;

          return 0;
        }

        static PyObject *t_Identity_value(t_Identity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeBuilder::class$ = NULL;
          jmethodID *RangeBuilder::mids$ = NULL;
          bool RangeBuilder::live$ = false;

          jclass RangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bda3a2dd57982d0f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_b0a1aa08a2944cf3] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Range;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeBuilder::RangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_bda3a2dd57982d0f, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::Range RangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Range(env->callObjectMethod(this$, mids$[mid_build_b0a1aa08a2944cf3], a0.this$, a1.this$));
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
          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args);
          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args);
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data);
          static PyGetSetDef t_RangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeBuilder)[] = {
            { Py_tp_methods, t_RangeBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeBuilder_init_ },
            { Py_tp_getset, t_RangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeBuilder, t_RangeBuilder, RangeBuilder);
          PyObject *t_RangeBuilder::wrap_Object(const RangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeBuilder), &PY_TYPE_DEF(RangeBuilder), module, "RangeBuilder", 0);
          }

          void t_RangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "class_", make_descriptor(RangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "wrapfn_", make_descriptor(t_RangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeBuilder::wrap_Object(RangeBuilder(((t_RangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Range result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Range::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data)
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
#include "org/orekit/estimation/iod/IodLaplace.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLaplace::class$ = NULL;
        jmethodID *IodLaplace::mids$ = NULL;
        bool IodLaplace::live$ = false;

        jclass IodLaplace::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLaplace");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_3e39f730636f7cb8] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_826da74c81b95475] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_0f30588d6f69b08f] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLaplace::IodLaplace(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_3e39f730636f7cb8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_826da74c81b95475], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_0f30588d6f69b08f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
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
      namespace iod {
        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args);

        static PyMethodDef t_IodLaplace__methods_[] = {
          DECLARE_METHOD(t_IodLaplace, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLaplace)[] = {
          { Py_tp_methods, t_IodLaplace__methods_ },
          { Py_tp_init, (void *) t_IodLaplace_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLaplace)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLaplace, t_IodLaplace, IodLaplace);

        void t_IodLaplace::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLaplace), &PY_TYPE_DEF(IodLaplace), module, "IodLaplace", 0);
        }

        void t_IodLaplace::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "class_", make_descriptor(IodLaplace::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "wrapfn_", make_descriptor(t_IodLaplace::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLaplace::initializeClass, 1)))
            return NULL;
          return t_IodLaplace::wrap_Object(IodLaplace(((t_IodLaplace *) arg)->object.this$));
        }
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLaplace::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLaplace object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLaplace(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$SumAndResidual::class$ = NULL;
      jmethodID *MathUtils$SumAndResidual::mids$ = NULL;
      bool MathUtils$SumAndResidual::live$ = false;

      jclass MathUtils$SumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$SumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_557b8123390d8d0c] = env->getMethodID(cls, "getResidual", "()D");
          mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathUtils$SumAndResidual::getResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getResidual_557b8123390d8d0c]);
      }

      jdouble MathUtils$SumAndResidual::getSum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data);
      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$SumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, sum),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$SumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$SumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$SumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$SumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$SumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$SumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$SumAndResidual, t_MathUtils$SumAndResidual, MathUtils$SumAndResidual);

      void t_MathUtils$SumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$SumAndResidual), &PY_TYPE_DEF(MathUtils$SumAndResidual), module, "MathUtils$SumAndResidual", 0);
      }

      void t_MathUtils$SumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "class_", make_descriptor(MathUtils$SumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$SumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$SumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$SumAndResidual::wrap_Object(MathUtils$SumAndResidual(((t_MathUtils$SumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$SumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSum());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *GridAxis::class$ = NULL;
        jmethodID *GridAxis::mids$ = NULL;
        bool GridAxis::live$ = false;

        jclass GridAxis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/GridAxis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3496521775f3fd31] = env->getMethodID(cls, "<init>", "([DI)V");
            mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_interpolationIndex_abbeb9db7144ca23] = env->getMethodID(cls, "interpolationIndex", "(D)I");
            mids$[mid_node_69cfb132c661aca4] = env->getMethodID(cls, "node", "(I)D");
            mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GridAxis::GridAxis(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3496521775f3fd31, a0.this$, a1)) {}

        jint GridAxis::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
        }

        jint GridAxis::interpolationIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_interpolationIndex_abbeb9db7144ca23], a0);
        }

        jdouble GridAxis::node(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_node_69cfb132c661aca4], a0);
        }

        jint GridAxis::size() const
        {
          return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
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
        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GridAxis_getN(t_GridAxis *self);
        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_size(t_GridAxis *self);
        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data);
        static PyGetSetDef t_GridAxis__fields_[] = {
          DECLARE_GET_FIELD(t_GridAxis, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GridAxis__methods_[] = {
          DECLARE_METHOD(t_GridAxis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, getN, METH_NOARGS),
          DECLARE_METHOD(t_GridAxis, interpolationIndex, METH_O),
          DECLARE_METHOD(t_GridAxis, node, METH_O),
          DECLARE_METHOD(t_GridAxis, size, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridAxis)[] = {
          { Py_tp_methods, t_GridAxis__methods_ },
          { Py_tp_init, (void *) t_GridAxis_init_ },
          { Py_tp_getset, t_GridAxis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridAxis)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridAxis, t_GridAxis, GridAxis);

        void t_GridAxis::install(PyObject *module)
        {
          installType(&PY_TYPE(GridAxis), &PY_TYPE_DEF(GridAxis), module, "GridAxis", 0);
        }

        void t_GridAxis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "class_", make_descriptor(GridAxis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "wrapfn_", make_descriptor(t_GridAxis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridAxis::initializeClass, 1)))
            return NULL;
          return t_GridAxis::wrap_Object(GridAxis(((t_GridAxis *) arg)->object.this$));
        }
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridAxis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          GridAxis object((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            INT_CALL(object = GridAxis(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GridAxis_getN(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.interpolationIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolationIndex", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.node(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "node", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_size(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.size());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodies::class$ = NULL;
      jmethodID *CelestialBodies::mids$ = NULL;
      bool CelestialBodies::live$ = false;

      jclass CelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_40e74583267ad550] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_40e74583267ad550] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_40e74583267ad550] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_40e74583267ad550] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_40e74583267ad550] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_40e74583267ad550] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_40e74583267ad550] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_40e74583267ad550] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_40e74583267ad550] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_40e74583267ad550] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_40e74583267ad550] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_40e74583267ad550] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_40e74583267ad550] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_47d89fc2b3d16fd5], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_40e74583267ad550]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg);
      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data);
      static PyGetSetDef t_CelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodies, earth),
        DECLARE_GET_FIELD(t_CelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodies, mars),
        DECLARE_GET_FIELD(t_CelestialBodies, mercury),
        DECLARE_GET_FIELD(t_CelestialBodies, moon),
        DECLARE_GET_FIELD(t_CelestialBodies, neptune),
        DECLARE_GET_FIELD(t_CelestialBodies, pluto),
        DECLARE_GET_FIELD(t_CelestialBodies, saturn),
        DECLARE_GET_FIELD(t_CelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, sun),
        DECLARE_GET_FIELD(t_CelestialBodies, uranus),
        DECLARE_GET_FIELD(t_CelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodies__methods_[] = {
        DECLARE_METHOD(t_CelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_CelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodies)[] = {
        { Py_tp_methods, t_CelestialBodies__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodies, t_CelestialBodies, CelestialBodies);

      void t_CelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodies), &PY_TYPE_DEF(CelestialBodies), module, "CelestialBodies", 0);
      }

      void t_CelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "class_", make_descriptor(CelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "wrapfn_", make_descriptor(t_CelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodies::initializeClass, 1)))
          return NULL;
        return t_CelestialBodies::wrap_Object(CelestialBodies(((t_CelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/BufferedReader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *BufferedReader::class$ = NULL;
    jmethodID *BufferedReader::mids$ = NULL;
    bool BufferedReader::live$ = false;

    jclass BufferedReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/BufferedReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d679cb724d14a1e8] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;)V");
        mids$[mid_init$_bef797222a3f4702] = env->getMethodID(cls, "<init>", "(Ljava/io/Reader;I)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_lines_d7cce92225eb0db2] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_mark_a3da1a935cb37f7b] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_89b302893bdbe1f1] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_f0b052b9721148b0] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_readLine_3cffd47377eca18a] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_ready_89b302893bdbe1f1] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BufferedReader::BufferedReader(const ::java::io::Reader & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_d679cb724d14a1e8, a0.this$)) {}

    BufferedReader::BufferedReader(const ::java::io::Reader & a0, jint a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_bef797222a3f4702, a0.this$, a1)) {}

    void BufferedReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    ::java::util::stream::Stream BufferedReader::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_d7cce92225eb0db2]));
    }

    void BufferedReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_a3da1a935cb37f7b], a0);
    }

    jboolean BufferedReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_89b302893bdbe1f1]);
    }

    jint BufferedReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint BufferedReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_f0b052b9721148b0], a0.this$, a1, a2);
    }

    ::java::lang::String BufferedReader::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_3cffd47377eca18a]));
    }

    jboolean BufferedReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_89b302893bdbe1f1]);
    }

    void BufferedReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
    }

    jlong BufferedReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_lines(t_BufferedReader *self);
    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self);
    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args);
    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args);

    static PyMethodDef t_BufferedReader__methods_[] = {
      DECLARE_METHOD(t_BufferedReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BufferedReader, close, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, lines, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, read, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, readLine, METH_NOARGS),
      DECLARE_METHOD(t_BufferedReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_BufferedReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BufferedReader)[] = {
      { Py_tp_methods, t_BufferedReader__methods_ },
      { Py_tp_init, (void *) t_BufferedReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BufferedReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(BufferedReader, t_BufferedReader, BufferedReader);

    void t_BufferedReader::install(PyObject *module)
    {
      installType(&PY_TYPE(BufferedReader), &PY_TYPE_DEF(BufferedReader), module, "BufferedReader", 0);
    }

    void t_BufferedReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "class_", make_descriptor(BufferedReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "wrapfn_", make_descriptor(t_BufferedReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BufferedReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BufferedReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BufferedReader::initializeClass, 1)))
        return NULL;
      return t_BufferedReader::wrap_Object(BufferedReader(((t_BufferedReader *) arg)->object.this$));
    }
    static PyObject *t_BufferedReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BufferedReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BufferedReader_init_(t_BufferedReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::Reader a0((jobject) NULL);
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            INT_CALL(object = BufferedReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::Reader a0((jobject) NULL);
          jint a1;
          BufferedReader object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::io::Reader::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BufferedReader(a0, a1));
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

    static PyObject *t_BufferedReader_close(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_BufferedReader_lines(t_BufferedReader *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_BufferedReader_mark(t_BufferedReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_BufferedReader_markSupported(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_BufferedReader_read(t_BufferedReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_BufferedReader_readLine(t_BufferedReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_BufferedReader_ready(t_BufferedReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_BufferedReader_reset(t_BufferedReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_BufferedReader_skip(t_BufferedReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(BufferedReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/SlewingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *SlewingPanel::class$ = NULL;
      jmethodID *SlewingPanel::mids$ = NULL;
      bool SlewingPanel::live$ = false;

      jclass SlewingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/SlewingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c66bdc47ced46b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDD)V");
          mids$[mid_getNormal_503a254311e5da95] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SlewingPanel::SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_9c66bdc47ced46b3, a0.this$, a1, a2.this$, a3.this$, a4, a5, a6, a7, a8)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SlewingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_503a254311e5da95], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SlewingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_3fff8c49d4e2dc6b], a0.this$));
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
      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args);

      static PyMethodDef t_SlewingPanel__methods_[] = {
        DECLARE_METHOD(t_SlewingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SlewingPanel)[] = {
        { Py_tp_methods, t_SlewingPanel__methods_ },
        { Py_tp_init, (void *) t_SlewingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SlewingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(SlewingPanel, t_SlewingPanel, SlewingPanel);

      void t_SlewingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(SlewingPanel), &PY_TYPE_DEF(SlewingPanel), module, "SlewingPanel", 0);
      }

      void t_SlewingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "class_", make_descriptor(SlewingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "wrapfn_", make_descriptor(t_SlewingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SlewingPanel::initializeClass, 1)))
          return NULL;
        return t_SlewingPanel::wrap_Object(SlewingPanel(((t_SlewingPanel *) arg)->object.this$));
      }
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SlewingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        SlewingPanel object((jobject) NULL);

        if (!parseArgs(args, "kDkkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
        {
          INT_CALL(object = SlewingPanel(a0, a1, a2, a3, a4, a5, a6, a7, a8));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SlewingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldTimeStampedCache::class$ = NULL;
      jmethodID *PythonFieldTimeStampedCache::mids$ = NULL;
      bool PythonFieldTimeStampedCache::live$ = false;

      jclass PythonFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_d2b16151ed8cc73c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStampedCache::PythonFieldTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldTimeStampedCache::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self);
      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data);
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStampedCache, t_PythonFieldTimeStampedCache, PythonFieldTimeStampedCache);
      PyObject *t_PythonFieldTimeStampedCache::wrap_Object(const PythonFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStampedCache), &PY_TYPE_DEF(PythonFieldTimeStampedCache), module, "PythonFieldTimeStampedCache", 1);
      }

      void t_PythonFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "class_", make_descriptor(PythonFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "wrapfn_", make_descriptor(t_PythonFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getLatest1 },
          { "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonFieldTimeStampedCache_getNeighbors2 },
          { "getNeighborsSize", "()I", (void *) t_PythonFieldTimeStampedCache_getNeighborsSize3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStampedCache_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStampedCache::wrap_Object(PythonFieldTimeStampedCache(((t_PythonFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *FieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool FieldAbstractAnalyticalPropagator::live$ = false;

        jclass FieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_dffb82756006eef9] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");
            mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagateOrbit_ec5b52b8a8c77d72] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_basicPropagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_acceptStep_12abab85b89cc2d0] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator$FieldBasicStepInterpolator;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_2ffeff0ffaf1deef], a0.this$);
        }

        void FieldAbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_07866493eb3b3f17]));
        }

        ::java::util::Collection FieldAbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
        }

        ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_dffb82756006eef9]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractAnalyticalPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_78f4b3ee8066e6b6], a0.this$, a1.this$));
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
        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self);
        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, pvProvider),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractAnalyticalPropagator, t_FieldAbstractAnalyticalPropagator, FieldAbstractAnalyticalPropagator);
        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_Object(const FieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(FieldAbstractAnalyticalPropagator), module, "FieldAbstractAnalyticalPropagator", 0);
        }

        void t_FieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "class_", make_descriptor(FieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_FieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractAnalyticalPropagator::wrap_Object(FieldAbstractAnalyticalPropagator(((t_FieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Expm1::class$ = NULL;
        jmethodID *Expm1::mids$ = NULL;
        bool Expm1::live$ = false;

        jclass Expm1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Expm1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Expm1::Expm1() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Expm1::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Expm1::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args);

        static PyMethodDef t_Expm1__methods_[] = {
          DECLARE_METHOD(t_Expm1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Expm1)[] = {
          { Py_tp_methods, t_Expm1__methods_ },
          { Py_tp_init, (void *) t_Expm1_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Expm1)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Expm1, t_Expm1, Expm1);

        void t_Expm1::install(PyObject *module)
        {
          installType(&PY_TYPE(Expm1), &PY_TYPE_DEF(Expm1), module, "Expm1", 0);
        }

        void t_Expm1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "class_", make_descriptor(Expm1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "wrapfn_", make_descriptor(t_Expm1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Expm1::initializeClass, 1)))
            return NULL;
          return t_Expm1::wrap_Object(Expm1(((t_Expm1 *) arg)->object.this$));
        }
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Expm1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds)
        {
          Expm1 object((jobject) NULL);

          INT_CALL(object = Expm1());
          self->object = object;

          return 0;
        }

        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmDataSubStructureKey::class$ = NULL;
              jmethodID *AcmDataSubStructureKey::mids$ = NULL;
              bool AcmDataSubStructureKey::live$ = false;
              AcmDataSubStructureKey *AcmDataSubStructureKey::AD = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ATT = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::COV = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::MAN = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::PHYS = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::USER = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ad = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::att = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::cov = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::man = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::phys = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::user = NULL;

              jclass AcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_318bdda3c4276f03] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;)Z");
                  mids$[mid_valueOf_6e5812972d939fcb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");
                  mids$[mid_values_706b0ea4d837aa33] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ATT = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  COV = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  MAN = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  PHYS = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  USER = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ad = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ad", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  att = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "att", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  cov = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  man = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  phys = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  user = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_318bdda3c4276f03], a0.this$, a1.this$);
              }

              AcmDataSubStructureKey AcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6e5812972d939fcb], a0.this$));
              }

              JArray< AcmDataSubStructureKey > AcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_706b0ea4d837aa33]));
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
          namespace adm {
            namespace acm {
              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_AcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_AcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_AcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmDataSubStructureKey, t_AcmDataSubStructureKey, AcmDataSubStructureKey);
              PyObject *t_AcmDataSubStructureKey::wrap_Object(const AcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmDataSubStructureKey), &PY_TYPE_DEF(AcmDataSubStructureKey), module, "AcmDataSubStructureKey", 0);
              }

              void t_AcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "class_", make_descriptor(AcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "wrapfn_", make_descriptor(t_AcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "AD", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ATT", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "COV", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "MAN", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "PHYS", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "USER", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ad", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ad)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "att", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::att)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "cov", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "man", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "phys", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "user", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::user)));
              }

              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_AcmDataSubStructureKey::wrap_Object(AcmDataSubStructureKey(((t_AcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::valueOf(a0));
                  return t_AcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< AcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *NevilleInterpolator::class$ = NULL;
        jmethodID *NevilleInterpolator::mids$ = NULL;
        bool NevilleInterpolator::live$ = false;

        jclass NevilleInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/NevilleInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_ff73d4135431584e] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NevilleInterpolator::NevilleInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm NevilleInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm(env->callObjectMethod(this$, mids$[mid_interpolate_ff73d4135431584e], a0.this$, a1.this$));
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
        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args);

        static PyMethodDef t_NevilleInterpolator__methods_[] = {
          DECLARE_METHOD(t_NevilleInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NevilleInterpolator)[] = {
          { Py_tp_methods, t_NevilleInterpolator__methods_ },
          { Py_tp_init, (void *) t_NevilleInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NevilleInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NevilleInterpolator, t_NevilleInterpolator, NevilleInterpolator);

        void t_NevilleInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(NevilleInterpolator), &PY_TYPE_DEF(NevilleInterpolator), module, "NevilleInterpolator", 0);
        }

        void t_NevilleInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "class_", make_descriptor(NevilleInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "wrapfn_", make_descriptor(t_NevilleInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NevilleInterpolator::initializeClass, 1)))
            return NULL;
          return t_NevilleInterpolator::wrap_Object(NevilleInterpolator(((t_NevilleInterpolator *) arg)->object.this$));
        }
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NevilleInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds)
        {
          NevilleInterpolator object((jobject) NULL);

          INT_CALL(object = NevilleInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionLagrangeForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriver::class$ = NULL;
      jmethodID *ParameterDriver::mids$ = NULL;
      bool ParameterDriver::live$ = false;

      jclass ParameterDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11f34b240685d435] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
          mids$[mid_init$_1a8ac44f48354981] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/TimeSpanMap;DDDD)V");
          mids$[mid_addObserver_e6d393940d6a20e3] = env->getMethodID(cls, "addObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_addSpanAtDate_20affcbd28542333] = env->getMethodID(cls, "addSpanAtDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_addSpans_51833a49fce6cea6] = env->getMethodID(cls, "addSpans", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getMaxValue_557b8123390d8d0c] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinValue_557b8123390d8d0c] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getNameSpan_4e0f3c605fbc7c96] = env->getMethodID(cls, "getNameSpan", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
          mids$[mid_getNamesSpanMap_d26bd874ee319049] = env->getMethodID(cls, "getNamesSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getNbOfValues_412668abc8d889e9] = env->getMethodID(cls, "getNbOfValues", "()I");
          mids$[mid_getNormalizedValue_557b8123390d8d0c] = env->getMethodID(cls, "getNormalizedValue", "()D");
          mids$[mid_getNormalizedValue_b0b988f941da47d8] = env->getMethodID(cls, "getNormalizedValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getObservers_0d9551367f7ecdef] = env->getMethodID(cls, "getObservers", "()Ljava/util/List;");
          mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getReferenceValue_557b8123390d8d0c] = env->getMethodID(cls, "getReferenceValue", "()D");
          mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
          mids$[mid_getTransitionDates_19f19b9ba44d5ed6] = env->getMethodID(cls, "getTransitionDates", "()[Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_getValue_b0b988f941da47d8] = env->getMethodID(cls, "getValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValue_e97c9d07fe9d7cd6] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValue_96022c3a4c0b72a5] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValueContinuousEstimation_b0b988f941da47d8] = env->getMethodID(cls, "getValueContinuousEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValueSpanMap_d26bd874ee319049] = env->getMethodID(cls, "getValueSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getValueStepEstimation_b0b988f941da47d8] = env->getMethodID(cls, "getValueStepEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValues_a53a7513ecedada2] = env->getMethodID(cls, "getValues", "()[D");
          mids$[mid_isContinuousEstimation_89b302893bdbe1f1] = env->getMethodID(cls, "isContinuousEstimation", "()Z");
          mids$[mid_isSelected_89b302893bdbe1f1] = env->getMethodID(cls, "isSelected", "()Z");
          mids$[mid_removeObserver_e6d393940d6a20e3] = env->getMethodID(cls, "removeObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_replaceObserver_3b5319961730db27] = env->getMethodID(cls, "replaceObserver", "(Lorg/orekit/utils/ParameterObserver;Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_setContinuousEstimation_ed2afdb8506b9742] = env->getMethodID(cls, "setContinuousEstimation", "(Z)V");
          mids$[mid_setMaxValue_10f281d777284cea] = env->getMethodID(cls, "setMaxValue", "(D)V");
          mids$[mid_setMinValue_10f281d777284cea] = env->getMethodID(cls, "setMinValue", "(D)V");
          mids$[mid_setName_f5ffdf29129ef90a] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
          mids$[mid_setNormalizedValue_10f281d777284cea] = env->getMethodID(cls, "setNormalizedValue", "(D)V");
          mids$[mid_setNormalizedValue_4ca6118c75b70100] = env->getMethodID(cls, "setNormalizedValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceDate_20affcbd28542333] = env->getMethodID(cls, "setReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceValue_10f281d777284cea] = env->getMethodID(cls, "setReferenceValue", "(D)V");
          mids$[mid_setScale_10f281d777284cea] = env->getMethodID(cls, "setScale", "(D)V");
          mids$[mid_setSelected_ed2afdb8506b9742] = env->getMethodID(cls, "setSelected", "(Z)V");
          mids$[mid_setValue_10f281d777284cea] = env->getMethodID(cls, "setValue", "(D)V");
          mids$[mid_setValue_4ca6118c75b70100] = env->getMethodID(cls, "setValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setValueSpanMap_558cfe74a49f563f] = env->getMethodID(cls, "setValueSpanMap", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11f34b240685d435, a0.this$, a1, a2, a3, a4)) {}

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, const ::org::orekit::utils::TimeSpanMap & a1, const ::org::orekit::utils::TimeSpanMap & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a8ac44f48354981, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

      void ParameterDriver::addObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addObserver_e6d393940d6a20e3], a0.this$);
      }

      void ParameterDriver::addSpanAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpanAtDate_20affcbd28542333], a0.this$);
      }

      void ParameterDriver::addSpans(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpans_51833a49fce6cea6], a0.this$, a1.this$, a2);
      }

      jdouble ParameterDriver::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_557b8123390d8d0c]);
      }

      jdouble ParameterDriver::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_557b8123390d8d0c]);
      }

      ::java::lang::String ParameterDriver::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::lang::String ParameterDriver::getNameSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNameSpan_4e0f3c605fbc7c96], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getNamesSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getNamesSpanMap_d26bd874ee319049]));
      }

      jint ParameterDriver::getNbOfValues() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbOfValues_412668abc8d889e9]);
      }

      jdouble ParameterDriver::getNormalizedValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_557b8123390d8d0c]);
      }

      jdouble ParameterDriver::getNormalizedValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_b0b988f941da47d8], a0.this$);
      }

      ::java::util::List ParameterDriver::getObservers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservers_0d9551367f7ecdef]));
      }

      ::org::orekit::time::AbsoluteDate ParameterDriver::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
      }

      jdouble ParameterDriver::getReferenceValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReferenceValue_557b8123390d8d0c]);
      }

      jdouble ParameterDriver::getScale() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
      }

      JArray< ::org::orekit::time::AbsoluteDate > ParameterDriver::getTransitionDates() const
      {
        return JArray< ::org::orekit::time::AbsoluteDate >(env->callObjectMethod(this$, mids$[mid_getTransitionDates_19f19b9ba44d5ed6]));
      }

      jdouble ParameterDriver::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
      }

      jdouble ParameterDriver::getValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_e97c9d07fe9d7cd6], a0, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_96022c3a4c0b72a5], a0, a1.this$, a2.this$));
      }

      jdouble ParameterDriver::getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueContinuousEstimation_b0b988f941da47d8], a0.this$);
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getValueSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getValueSpanMap_d26bd874ee319049]));
      }

      jdouble ParameterDriver::getValueStepEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueStepEstimation_b0b988f941da47d8], a0.this$);
      }

      JArray< jdouble > ParameterDriver::getValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_a53a7513ecedada2]));
      }

      jboolean ParameterDriver::isContinuousEstimation() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isContinuousEstimation_89b302893bdbe1f1]);
      }

      jboolean ParameterDriver::isSelected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSelected_89b302893bdbe1f1]);
      }

      void ParameterDriver::removeObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeObserver_e6d393940d6a20e3], a0.this$);
      }

      void ParameterDriver::replaceObserver(const ::org::orekit::utils::ParameterObserver & a0, const ::org::orekit::utils::ParameterObserver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_replaceObserver_3b5319961730db27], a0.this$, a1.this$);
      }

      void ParameterDriver::setContinuousEstimation(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setContinuousEstimation_ed2afdb8506b9742], a0);
      }

      void ParameterDriver::setMaxValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxValue_10f281d777284cea], a0);
      }

      void ParameterDriver::setMinValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinValue_10f281d777284cea], a0);
      }

      void ParameterDriver::setName(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setName_f5ffdf29129ef90a], a0.this$);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_10f281d777284cea], a0);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_4ca6118c75b70100], a0, a1.this$);
      }

      void ParameterDriver::setReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceDate_20affcbd28542333], a0.this$);
      }

      void ParameterDriver::setReferenceValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceValue_10f281d777284cea], a0);
      }

      void ParameterDriver::setScale(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_10f281d777284cea], a0);
      }

      void ParameterDriver::setSelected(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSelected_ed2afdb8506b9742], a0);
      }

      void ParameterDriver::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_10f281d777284cea], a0);
      }

      void ParameterDriver::setValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_4ca6118c75b70100], a0, a1.this$);
      }

      void ParameterDriver::setValueSpanMap(const ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValueSpanMap_558cfe74a49f563f], a0.this$);
      }

      ::java::lang::String ParameterDriver::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data);
      static PyGetSetDef t_ParameterDriver__fields_[] = {
        DECLARE_GETSET_FIELD(t_ParameterDriver, continuousEstimation),
        DECLARE_GETSET_FIELD(t_ParameterDriver, maxValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, minValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, name),
        DECLARE_GET_FIELD(t_ParameterDriver, namesSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, nbOfValues),
        DECLARE_GETSET_FIELD(t_ParameterDriver, normalizedValue),
        DECLARE_GET_FIELD(t_ParameterDriver, observers),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceDate),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, scale),
        DECLARE_GETSET_FIELD(t_ParameterDriver, selected),
        DECLARE_GET_FIELD(t_ParameterDriver, transitionDates),
        DECLARE_GETSET_FIELD(t_ParameterDriver, value),
        DECLARE_GETSET_FIELD(t_ParameterDriver, valueSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, values),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, addObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpanAtDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpans, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getName, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNameSpan, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getNamesSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNbOfValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getObservers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getScale, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getTransitionDates, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValueSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueStepEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isContinuousEstimation, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isSelected, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, removeObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, replaceObserver, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMaxValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMinValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setName, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setReferenceDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setReferenceValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setScale, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setSelected, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setValueSpanMap, METH_O),
        DECLARE_METHOD(t_ParameterDriver, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriver)[] = {
        { Py_tp_methods, t_ParameterDriver__methods_ },
        { Py_tp_init, (void *) t_ParameterDriver_init_ },
        { Py_tp_getset, t_ParameterDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriver, t_ParameterDriver, ParameterDriver);

      void t_ParameterDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriver), &PY_TYPE_DEF(ParameterDriver), module, "ParameterDriver", 0);
      }

      void t_ParameterDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "class_", make_descriptor(ParameterDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "wrapfn_", make_descriptor(t_ParameterDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriver::wrap_Object(ParameterDriver(((t_ParameterDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeSpanMap a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sKKDDDD", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addSpanAtDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpanAtDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addSpans(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpans", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getNameSpan(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getNameSpan", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbOfValues());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormalizedValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormalizedValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterObserver));
      }

      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScale());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self)
      {
        JArray< ::org::orekit::time::AbsoluteDate > result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitionDates());
        return JArray<jobject>(result.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::Map::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1, a2));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueContinuousEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueStepEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueStepEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValues());
        return result.wrap();
      }

      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSelected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);
        ::org::orekit::utils::ParameterObserver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterObserver::initializeClass, ::org::orekit::utils::ParameterObserver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.replaceObserver(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "replaceObserver", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setContinuousEstimation(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.setName(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setReferenceValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setSelected(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSelected", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg)
      {
        ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setValueSpanMap(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValueSpanMap", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ParameterDriver), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setContinuousEstimation(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "continuousEstimation", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object.setName(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "name", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbOfValues());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormalizedValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setNormalizedValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "normalizedValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceDate(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceDate", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setReferenceValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScale());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSelected());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setSelected(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "selected", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data)
      {
        JArray< ::org::orekit::time::AbsoluteDate > value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitionDates());
        return JArray<jobject>(value.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ParameterDriver value((jobject) NULL);
          if (!parseArg(arg, "k", ParameterDriver::initializeClass, &value))
          {
            INT_CALL(self->object.setValueSpanMap(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "valueSpanMap", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValues());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *DSSTBatchLSModel::class$ = NULL;
        jmethodID *DSSTBatchLSModel::mids$ = NULL;
        bool DSSTBatchLSModel::live$ = false;

        jclass DSSTBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/DSSTBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eb7a325cfac45318] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_configureHarvester_58ff847451f5cf92] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_614fe55969c9646f] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTBatchLSModel::DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_eb7a325cfac45318, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DSSTBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_DSSTBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTBatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTBatchLSModel)[] = {
          { Py_tp_methods, t_DSSTBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_DSSTBatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(DSSTBatchLSModel, t_DSSTBatchLSModel, DSSTBatchLSModel);

        void t_DSSTBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTBatchLSModel), &PY_TYPE_DEF(DSSTBatchLSModel), module, "DSSTBatchLSModel", 0);
        }

        void t_DSSTBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "class_", make_descriptor(DSSTBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "wrapfn_", make_descriptor(t_DSSTBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_DSSTBatchLSModel::wrap_Object(DSSTBatchLSModel(((t_DSSTBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          DSSTBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkkK", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = DSSTBatchLSModel(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
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
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableFunction::mids$ = NULL;
        bool MultivariateDifferentiableFunction::live$ = false;

        jclass MultivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_8bdb7c411329c668] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure MultivariateDifferentiableFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_value_8bdb7c411329c668], a0.this$));
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
      namespace differentiation {
        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableFunction, t_MultivariateDifferentiableFunction, MultivariateDifferentiableFunction);

        void t_MultivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableFunction), &PY_TYPE_DEF(MultivariateDifferentiableFunction), module, "MultivariateDifferentiableFunction", 0);
        }

        void t_MultivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "class_", make_descriptor(MultivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableFunction::wrap_Object(MultivariateDifferentiableFunction(((t_MultivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFile::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFile::mids$ = NULL;
        bool PythonAttitudeEphemerisFile::live$ = false;

        jclass PythonAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFile::PythonAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAttitudeEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAttitudeEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAttitudeEphemerisFile::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self);
        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFile, t_PythonAttitudeEphemerisFile, PythonAttitudeEphemerisFile);

        void t_PythonAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFile), &PY_TYPE_DEF(PythonAttitudeEphemerisFile), module, "PythonAttitudeEphemerisFile", 1);
        }

        void t_PythonAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "class_", make_descriptor(PythonAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonAttitudeEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFile::wrap_Object(PythonAttitudeEphemerisFile(((t_PythonAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data)
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
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *GaussianCurveFitter$ParameterGuesser::mids$ = NULL;
      bool GaussianCurveFitter$ParameterGuesser::live$ = false;

      jclass GaussianCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_a53a7513ecedada2] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter$ParameterGuesser::GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

      JArray< jdouble > GaussianCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_a53a7513ecedada2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_GaussianCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_GaussianCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_GaussianCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter$ParameterGuesser, t_GaussianCurveFitter$ParameterGuesser, GaussianCurveFitter$ParameterGuesser);

      void t_GaussianCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter$ParameterGuesser), &PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser), module, "GaussianCurveFitter$ParameterGuesser", 0);
      }

      void t_GaussianCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "class_", make_descriptor(GaussianCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_GaussianCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter$ParameterGuesser::wrap_Object(GaussianCurveFitter$ParameterGuesser(((t_GaussianCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        GaussianCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = GaussianCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
