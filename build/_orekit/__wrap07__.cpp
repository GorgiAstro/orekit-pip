#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundFieldOfViewDetector::class$ = NULL;
        jmethodID *GroundFieldOfViewDetector::mids$ = NULL;
        bool GroundFieldOfViewDetector::live$ = false;

        jclass GroundFieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundFieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_38a3c3a38499b272] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_6fdfc08762f52cd9] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_7abdc816322416da] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundFieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundFieldOfViewDetector::GroundFieldOfViewDetector(const ::org::orekit::frames::Frame & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_38a3c3a38499b272, a0.this$, a1.this$)) {}

        jdouble GroundFieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView GroundFieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_6fdfc08762f52cd9]));
        }

        ::org::orekit::frames::Frame GroundFieldOfViewDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args);
        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args);
        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data);
        static PyGetSetDef t_GroundFieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, frame),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundFieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_GroundFieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundFieldOfViewDetector)[] = {
          { Py_tp_methods, t_GroundFieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_GroundFieldOfViewDetector_init_ },
          { Py_tp_getset, t_GroundFieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundFieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundFieldOfViewDetector, t_GroundFieldOfViewDetector, GroundFieldOfViewDetector);
        PyObject *t_GroundFieldOfViewDetector::wrap_Object(const GroundFieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundFieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundFieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundFieldOfViewDetector), &PY_TYPE_DEF(GroundFieldOfViewDetector), module, "GroundFieldOfViewDetector", 0);
        }

        void t_GroundFieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "class_", make_descriptor(GroundFieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "wrapfn_", make_descriptor(t_GroundFieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundFieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_GroundFieldOfViewDetector::wrap_Object(GroundFieldOfViewDetector(((t_GroundFieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundFieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
          GroundFieldOfViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
          {
            INT_CALL(object = GroundFieldOfViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundFieldOfViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundFieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ForwardingRandomGenerator::class$ = NULL;
      jmethodID *ForwardingRandomGenerator::mids$ = NULL;
      bool ForwardingRandomGenerator::live$ = false;

      jclass ForwardingRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ForwardingRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_e4288ba5fbf20d28] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_1eaf6eb0a3f3163f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_delegate_8e5137c62f6fabd8] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ForwardingRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_e4288ba5fbf20d28], a0.this$, a1, a2);
      }

      jdouble ForwardingRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat ForwardingRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jdouble ForwardingRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint ForwardingRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jint ForwardingRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong ForwardingRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
      }

      jlong ForwardingRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_1eaf6eb0a3f3163f], a0);
      }

      void ForwardingRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void ForwardingRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void ForwardingRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args);
      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_ForwardingRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_ForwardingRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForwardingRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_ForwardingRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForwardingRandomGenerator)[] = {
        { Py_tp_methods, t_ForwardingRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForwardingRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForwardingRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ForwardingRandomGenerator, t_ForwardingRandomGenerator, ForwardingRandomGenerator);

      void t_ForwardingRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(ForwardingRandomGenerator), &PY_TYPE_DEF(ForwardingRandomGenerator), module, "ForwardingRandomGenerator", 0);
      }

      void t_ForwardingRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "class_", make_descriptor(ForwardingRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "wrapfn_", make_descriptor(t_ForwardingRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForwardingRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_ForwardingRandomGenerator::wrap_Object(ForwardingRandomGenerator(((t_ForwardingRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForwardingRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *S1Point::class$ = NULL;
          jmethodID *S1Point::mids$ = NULL;
          bool S1Point::live$ = false;
          S1Point *S1Point::NaN = NULL;

          jclass S1Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/S1Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_ef4e9de8d5b8dce6] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_72faff9b05f5ed5e] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getVector_0490d0574aafb07c] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NaN = new S1Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/oned/S1Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S1Point::S1Point(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          jdouble S1Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
          }

          jdouble S1Point::distance(const S1Point & a0, const S1Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_ef4e9de8d5b8dce6], a0.this$, a1.this$);
          }

          jboolean S1Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jboolean S1Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_72faff9b05f5ed5e], a0.this$);
          }

          jdouble S1Point::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::Space S1Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D S1Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getVector_0490d0574aafb07c]));
          }

          jint S1Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean S1Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
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
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg);
          static PyObject *t_S1Point_getAlpha(t_S1Point *self);
          static PyObject *t_S1Point_getSpace(t_S1Point *self);
          static PyObject *t_S1Point_getVector(t_S1Point *self);
          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args);
          static PyObject *t_S1Point_isNaN(t_S1Point *self);
          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data);
          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data);
          static PyGetSetDef t_S1Point__fields_[] = {
            DECLARE_GET_FIELD(t_S1Point, alpha),
            DECLARE_GET_FIELD(t_S1Point, naN),
            DECLARE_GET_FIELD(t_S1Point, space),
            DECLARE_GET_FIELD(t_S1Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S1Point__methods_[] = {
            DECLARE_METHOD(t_S1Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S1Point, distance, METH_O),
            DECLARE_METHOD(t_S1Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S1Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S1Point, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S1Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S1Point, isNaN, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S1Point)[] = {
            { Py_tp_methods, t_S1Point__methods_ },
            { Py_tp_init, (void *) t_S1Point_init_ },
            { Py_tp_getset, t_S1Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S1Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S1Point, t_S1Point, S1Point);

          void t_S1Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S1Point), &PY_TYPE_DEF(S1Point), module, "S1Point", 0);
          }

          void t_S1Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "class_", make_descriptor(S1Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "wrapfn_", make_descriptor(t_S1Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S1Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S1Point), "NaN", make_descriptor(t_S1Point::wrap_Object(*S1Point::NaN)));
          }

          static PyObject *t_S1Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S1Point::initializeClass, 1)))
              return NULL;
            return t_S1Point::wrap_Object(S1Point(((t_S1Point *) arg)->object.this$));
          }
          static PyObject *t_S1Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S1Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S1Point_init_(t_S1Point *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            S1Point object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = S1Point(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_S1Point_distance(t_S1Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S1Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S1Point a0((jobject) NULL);
            S1Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S1Point::initializeClass, S1Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::S1Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S1Point_equals(t_S1Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S1Point_equalsIeee754(t_S1Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S1Point_getAlpha(t_S1Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S1Point_getSpace(t_S1Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S1Point_getVector(t_S1Point *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_S1Point_hashCode(t_S1Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S1Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S1Point_isNaN(t_S1Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S1Point_get__alpha(t_S1Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S1Point_get__naN(t_S1Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S1Point_get__space(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S1Point_get__vector(t_S1Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *RombergIntegrator::class$ = NULL;
        jmethodID *RombergIntegrator::mids$ = NULL;
        bool RombergIntegrator::live$ = false;
        jint RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass RombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/RombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_eb6adaa8ce308c89] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RombergIntegrator::RombergIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        RombergIntegrator::RombergIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        RombergIntegrator::RombergIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_eb6adaa8ce308c89, a0, a1, a2, a3)) {}
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
        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_RombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_RombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RombergIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RombergIntegrator)[] = {
          { Py_tp_methods, t_RombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_RombergIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(RombergIntegrator, t_RombergIntegrator, RombergIntegrator);

        void t_RombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RombergIntegrator), &PY_TYPE_DEF(RombergIntegrator), module, "RombergIntegrator", 0);
        }

        void t_RombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "class_", make_descriptor(RombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "wrapfn_", make_descriptor(t_RombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(RombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_RombergIntegrator::wrap_Object(RombergIntegrator(((t_RombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RombergIntegrator object((jobject) NULL);

              INT_CALL(object = RombergIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = RombergIntegrator(a0, a1));
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
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = RombergIntegrator(a0, a1, a2, a3));
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
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *STMEquations::class$ = NULL;
          jmethodID *STMEquations::mids$ = NULL;
          bool STMEquations::live$ = false;

          jclass STMEquations::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/STMEquations");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d97bf5b01aa2ae7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_combinedDerivatives_3642c368f508585f] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_setInitialPhi_ed3fe207e6fde26f] = env->getMethodID(cls, "setInitialPhi", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          STMEquations::STMEquations(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d97bf5b01aa2ae7b, a0.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives STMEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_3642c368f508585f], a0.this$));
          }

          jint STMEquations::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          ::java::lang::String STMEquations::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::org::hipparchus::linear::RealMatrix STMEquations::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018], a0.this$));
          }

          ::org::orekit::propagation::SpacecraftState STMEquations::setInitialPhi(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialPhi_ed3fe207e6fde26f], a0.this$));
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
          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg);
          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds);
          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_getDimension(t_STMEquations *self);
          static PyObject *t_STMEquations_getName(t_STMEquations *self);
          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data);
          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data);
          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data);
          static PyGetSetDef t_STMEquations__fields_[] = {
            DECLARE_GET_FIELD(t_STMEquations, dimension),
            DECLARE_SET_FIELD(t_STMEquations, initialPhi),
            DECLARE_GET_FIELD(t_STMEquations, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_STMEquations__methods_[] = {
            DECLARE_METHOD(t_STMEquations, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_STMEquations, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getName, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getStateTransitionMatrix, METH_O),
            DECLARE_METHOD(t_STMEquations, setInitialPhi, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(STMEquations)[] = {
            { Py_tp_methods, t_STMEquations__methods_ },
            { Py_tp_init, (void *) t_STMEquations_init_ },
            { Py_tp_getset, t_STMEquations__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(STMEquations)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(STMEquations, t_STMEquations, STMEquations);

          void t_STMEquations::install(PyObject *module)
          {
            installType(&PY_TYPE(STMEquations), &PY_TYPE_DEF(STMEquations), module, "STMEquations", 0);
          }

          void t_STMEquations::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "class_", make_descriptor(STMEquations::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "wrapfn_", make_descriptor(t_STMEquations::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, STMEquations::initializeClass, 1)))
              return NULL;
            return t_STMEquations::wrap_Object(STMEquations(((t_STMEquations *) arg)->object.this$));
          }
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, STMEquations::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            STMEquations object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = STMEquations(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_getDimension(t_STMEquations *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_STMEquations_getName(t_STMEquations *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.setInitialPhi(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialPhi", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialPhi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialPhi", arg);
            return -1;
          }

          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedIntConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedIntConsumer::mids$ = NULL;
            bool ParseToken$IndexedIntConsumer::live$ = false;

            jclass ParseToken$IndexedIntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_b5d23e6c0858e8ed] = env->getMethodID(cls, "accept", "(II)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedIntConsumer::accept(jint a0, jint a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_b5d23e6c0858e8ed], a0, a1);
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
            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedIntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedIntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedIntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedIntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedIntConsumer, t_ParseToken$IndexedIntConsumer, ParseToken$IndexedIntConsumer);

            void t_ParseToken$IndexedIntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedIntConsumer), &PY_TYPE_DEF(ParseToken$IndexedIntConsumer), module, "ParseToken$IndexedIntConsumer", 0);
            }

            void t_ParseToken$IndexedIntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "class_", make_descriptor(ParseToken$IndexedIntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedIntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedIntConsumer::wrap_Object(ParseToken$IndexedIntConsumer(((t_ParseToken$IndexedIntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParseException::class$ = NULL;
    jmethodID *ParseException::mids$ = NULL;
    bool ParseException::live$ = false;

    jclass ParseException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParseException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_409747bddf859341] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
        mids$[mid_getErrorOffset_d6ab429752e7c267] = env->getMethodID(cls, "getErrorOffset", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParseException::ParseException(const ::java::lang::String & a0, jint a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_409747bddf859341, a0.this$, a1)) {}

    jint ParseException::getErrorOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorOffset_d6ab429752e7c267]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self);
    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data);
    static PyGetSetDef t_ParseException__fields_[] = {
      DECLARE_GET_FIELD(t_ParseException, errorOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParseException__methods_[] = {
      DECLARE_METHOD(t_ParseException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, getErrorOffset, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParseException)[] = {
      { Py_tp_methods, t_ParseException__methods_ },
      { Py_tp_init, (void *) t_ParseException_init_ },
      { Py_tp_getset, t_ParseException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParseException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ParseException, t_ParseException, ParseException);

    void t_ParseException::install(PyObject *module)
    {
      installType(&PY_TYPE(ParseException), &PY_TYPE_DEF(ParseException), module, "ParseException", 0);
    }

    void t_ParseException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "class_", make_descriptor(ParseException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "wrapfn_", make_descriptor(t_ParseException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParseException::initializeClass, 1)))
        return NULL;
      return t_ParseException::wrap_Object(ParseException(((t_ParseException *) arg)->object.this$));
    }
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParseException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;
      ParseException object((jobject) NULL);

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        INT_CALL(object = ParseException(a0, a1));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorOffset());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *FieldOrekitStepInterpolator::mids$ = NULL;
        bool FieldOrekitStepInterpolator::live$ = false;

        jclass FieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_a74be2e38786f3b6] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_fb689a9c0f30b938] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPreviousState_a74be2e38786f3b6] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_restrictStep_accb7476fa222284] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_a74be2e38786f3b6]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_fb689a9c0f30b938], a0.this$));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_a74be2e38786f3b6]));
        }

        jboolean FieldOrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        FieldOrekitStepInterpolator FieldOrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
        {
          return FieldOrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_accb7476fa222284], a0.this$, a1.this$));
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
        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_FieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_FieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepInterpolator, t_FieldOrekitStepInterpolator, FieldOrekitStepInterpolator);
        PyObject *t_FieldOrekitStepInterpolator::wrap_Object(const FieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepInterpolator), &PY_TYPE_DEF(FieldOrekitStepInterpolator), module, "FieldOrekitStepInterpolator", 0);
        }

        void t_FieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "class_", make_descriptor(FieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_FieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepInterpolator::wrap_Object(FieldOrekitStepInterpolator(((t_FieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldOrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_FieldOrekitStepInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadataKey::class$ = NULL;
            jmethodID *OdmMetadataKey::mids$ = NULL;
            bool OdmMetadataKey::live$ = false;
            OdmMetadataKey *OdmMetadataKey::OBJECT_NAME = NULL;

            jclass OdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_73d9b8bee0f33c33] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmMetadata;)Z");
                mids$[mid_valueOf_3043580d85d0f34b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");
                mids$[mid_values_b78286369e055c7d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_NAME = new OdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean OdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_73d9b8bee0f33c33], a0.this$, a1.this$, a2.this$);
            }

            OdmMetadataKey OdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return OdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3043580d85d0f34b], a0.this$));
            }

            JArray< OdmMetadataKey > OdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< OdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b78286369e055c7d]));
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
            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data);
            static PyGetSetDef t_OdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_OdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_OdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadataKey)[] = {
              { Py_tp_methods, t_OdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(OdmMetadataKey, t_OdmMetadataKey, OdmMetadataKey);
            PyObject *t_OdmMetadataKey::wrap_Object(const OdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_OdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_OdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadataKey), &PY_TYPE_DEF(OdmMetadataKey), module, "OdmMetadataKey", 0);
            }

            void t_OdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "class_", make_descriptor(OdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "wrapfn_", make_descriptor(t_OdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(OdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "OBJECT_NAME", make_descriptor(t_OdmMetadataKey::wrap_Object(*OdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_OdmMetadataKey::wrap_Object(OdmMetadataKey(((t_OdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              OdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::valueOf(a0));
                return t_OdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< OdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_OdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodType::class$ = NULL;
          jmethodID *PocMethodType::mids$ = NULL;
          bool PocMethodType::live$ = false;
          PocMethodType *PocMethodType::AKELLAALFRIEND_2000 = NULL;
          PocMethodType *PocMethodType::ALFANO_2005 = NULL;
          PocMethodType *PocMethodType::ALFANO_MAX_PROBABILITY = NULL;
          PocMethodType *PocMethodType::ALFANO_PARAL_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_TUBES_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_VOXELS_2006 = NULL;
          PocMethodType *PocMethodType::ALFRIEND_1999 = NULL;
          PocMethodType *PocMethodType::CHAN_1997 = NULL;
          PocMethodType *PocMethodType::CHAN_2003 = NULL;
          PocMethodType *PocMethodType::FOSTER_1992 = NULL;
          PocMethodType *PocMethodType::MCKINLEY_2006 = NULL;
          PocMethodType *PocMethodType::PATERA_2001 = NULL;
          PocMethodType *PocMethodType::PATERA_2003 = NULL;
          PocMethodType *PocMethodType::PATERA_2005 = NULL;

          jclass PocMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCCSDSName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCCSDSName", "()Ljava/lang/String;");
              mids$[mid_getMethodType_592990a91429410c] = env->getMethodID(cls, "getMethodType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
              mids$[mid_valueOf_722c1f9de974331d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_values_f3e1f05493938dcc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/PocMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AKELLAALFRIEND_2000 = new PocMethodType(env->getStaticObjectField(cls, "AKELLAALFRIEND_2000", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_2005 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_MAX_PROBABILITY = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_PARAL_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_PARAL_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_TUBES_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_TUBES_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_VOXELS_2006 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_VOXELS_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFRIEND_1999 = new PocMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_1997 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_2003 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              FOSTER_1992 = new PocMethodType(env->getStaticObjectField(cls, "FOSTER_1992", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              MCKINLEY_2006 = new PocMethodType(env->getStaticObjectField(cls, "MCKINLEY_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2001 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2001", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2003 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2005 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String PocMethodType::getCCSDSName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCCSDSName_d2c8eb4129821f0e]));
          }

          ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType PocMethodType::getMethodType() const
          {
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getMethodType_592990a91429410c]));
          }

          PocMethodType PocMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_722c1f9de974331d], a0.this$));
          }

          JArray< PocMethodType > PocMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< PocMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_f3e1f05493938dcc]));
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
        namespace definitions {
          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args);
          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self);
          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self);
          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_PocMethodType_values(PyTypeObject *type);
          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data);
          static PyGetSetDef t_PocMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodType, cCSDSName),
            DECLARE_GET_FIELD(t_PocMethodType, methodType),
            DECLARE_GET_FIELD(t_PocMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodType__methods_[] = {
            DECLARE_METHOD(t_PocMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_PocMethodType, getCCSDSName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, getMethodType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodType)[] = {
            { Py_tp_methods, t_PocMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PocMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(PocMethodType, t_PocMethodType, PocMethodType);
          PyObject *t_PocMethodType::wrap_Object(const PocMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PocMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PocMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodType), &PY_TYPE_DEF(PocMethodType), module, "PocMethodType", 0);
          }

          void t_PocMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "class_", make_descriptor(PocMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "wrapfn_", make_descriptor(t_PocMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(PocMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "AKELLAALFRIEND_2000", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::AKELLAALFRIEND_2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_MAX_PROBABILITY", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_MAX_PROBABILITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_PARAL_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_PARAL_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_TUBES_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_TUBES_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_VOXELS_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_VOXELS_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFRIEND_1999", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFRIEND_1999)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_1997", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "FOSTER_1992", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::FOSTER_1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "MCKINLEY_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::MCKINLEY_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2001", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2005)));
          }

          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodType::initializeClass, 1)))
              return NULL;
            return t_PocMethodType::wrap_Object(PocMethodType(((t_PocMethodType *) arg)->object.this$));
          }
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCCSDSName());
            return j2p(result);
          }

          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::valueOf(a0));
              return t_PocMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_PocMethodType_values(PyTypeObject *type)
          {
            JArray< PocMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_PocMethodType::wrap_jobject);
          }
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCCSDSName());
            return j2p(value);
          }

          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *OneAxisEllipsoid::class$ = NULL;
      jmethodID *OneAxisEllipsoid::mids$ = NULL;
      bool OneAxisEllipsoid::live$ = false;

      jclass OneAxisEllipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/OneAxisEllipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ba4696e0d7f6f24b] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
          mids$[mid_azimuthBetweenPoints_d068340f0881721a] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_azimuthBetweenPoints_42ce0d79e4873dba] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
          mids$[mid_geodeticToIsometricLatitude_bf28ed64d6e8576b] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(D)D");
          mids$[mid_geodeticToIsometricLatitude_a3b854adede8eaaa] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getCartesianIntersectionPoint_7cd19c1d95732808] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCartesianIntersectionPoint_f772271ca5bb60b6] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getEccentricity_9981f74b2d109da6] = env->getMethodID(cls, "getEccentricity", "()D");
          mids$[mid_getEccentricitySquared_9981f74b2d109da6] = env->getMethodID(cls, "getEccentricitySquared", "()D");
          mids$[mid_getEquatorialRadius_9981f74b2d109da6] = env->getMethodID(cls, "getEquatorialRadius", "()D");
          mids$[mid_getFlattening_9981f74b2d109da6] = env->getMethodID(cls, "getFlattening", "()D");
          mids$[mid_getIntersectionPoint_9f0bcc9c00772903] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_ade5649cae5a4672] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_6357fc3fac3850cf] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_b55048092d248675] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_28dd2a6cc35491d2] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_26b1db430bbeb49e] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_setAngularThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAngularThreshold", "(D)V");
          mids$[mid_transform_f974aaaf2e73b405] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_82a0f6c52928ba20] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_b9470a5aa5e1e222] = env->getMethodID(cls, "transform", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OneAxisEllipsoid::OneAxisEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::Ellipsoid(env->newObject(initializeClass, &mids$, mid_init$_ba4696e0d7f6f24b, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_azimuthBetweenPoints_d068340f0881721a], a0.this$, a1.this$));
      }

      jdouble OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_azimuthBetweenPoints_42ce0d79e4873dba], a0.this$, a1.this$);
      }

      jdouble OneAxisEllipsoid::geodeticToIsometricLatitude(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_geodeticToIsometricLatitude_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_geodeticToIsometricLatitude_a3b854adede8eaaa], a0.this$));
      }

      ::org::orekit::frames::Frame OneAxisEllipsoid::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_7cd19c1d95732808], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_f772271ca5bb60b6], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jdouble OneAxisEllipsoid::getEccentricity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricity_9981f74b2d109da6]);
      }

      jdouble OneAxisEllipsoid::getEccentricitySquared() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricitySquared_9981f74b2d109da6]);
      }

      jdouble OneAxisEllipsoid::getEquatorialRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_9981f74b2d109da6]);
      }

      jdouble OneAxisEllipsoid::getFlattening() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFlattening_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9f0bcc9c00772903], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ade5649cae5a4672], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_6357fc3fac3850cf], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_b55048092d248675], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates OneAxisEllipsoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_28dd2a6cc35491d2], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_26b1db430bbeb49e], a0.this$, a1.this$, a2.this$));
      }

      void OneAxisEllipsoid::setAngularThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAngularThreshold_1ad26e8c8c0cd65b], a0);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_f974aaaf2e73b405], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_0bfc32b1890053a9], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_82a0f6c52928ba20], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_52f3336802c12846], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_b9470a5aa5e1e222], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args);
      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data);
      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data);
      static PyGetSetDef t_OneAxisEllipsoid__fields_[] = {
        DECLARE_SET_FIELD(t_OneAxisEllipsoid, angularThreshold),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, bodyFrame),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricity),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricitySquared),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, equatorialRadius),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, flattening),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OneAxisEllipsoid__methods_[] = {
        DECLARE_METHOD(t_OneAxisEllipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, azimuthBetweenPoints, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, geodeticToIsometricLatitude, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getCartesianIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricity, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricitySquared, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEquatorialRadius, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getFlattening, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, lowestAltitudeIntermediate, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, setAngularThreshold, METH_O),
        DECLARE_METHOD(t_OneAxisEllipsoid, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OneAxisEllipsoid)[] = {
        { Py_tp_methods, t_OneAxisEllipsoid__methods_ },
        { Py_tp_init, (void *) t_OneAxisEllipsoid_init_ },
        { Py_tp_getset, t_OneAxisEllipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OneAxisEllipsoid)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Ellipsoid),
        NULL
      };

      DEFINE_TYPE(OneAxisEllipsoid, t_OneAxisEllipsoid, OneAxisEllipsoid);

      void t_OneAxisEllipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(OneAxisEllipsoid), &PY_TYPE_DEF(OneAxisEllipsoid), module, "OneAxisEllipsoid", 0);
      }

      void t_OneAxisEllipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "class_", make_descriptor(OneAxisEllipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "wrapfn_", make_descriptor(t_OneAxisEllipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OneAxisEllipsoid::initializeClass, 1)))
          return NULL;
        return t_OneAxisEllipsoid::wrap_Object(OneAxisEllipsoid(((t_OneAxisEllipsoid *) arg)->object.this$));
      }
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OneAxisEllipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OneAxisEllipsoid object((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OneAxisEllipsoid(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "azimuthBetweenPoints", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "geodeticToIsometricLatitude", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCartesianIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFlattening());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "lowestAltitudeIntermediate", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setAngularThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAngularThreshold", arg);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setAngularThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "angularThreshold", arg);
        return -1;
      }

      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricity());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFlattening());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonDragSensitive::class$ = NULL;
        jmethodID *PythonDragSensitive::mids$ = NULL;
        bool PythonDragSensitive::live$ = false;

        jclass PythonDragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonDragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_dragAcceleration_4a6ab2502c320936] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_73bcdbeb8ff641bb] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDragParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDragSensitive::PythonDragSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonDragSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonDragSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonDragSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace drag {
        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self);
        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data);
        static PyGetSetDef t_PythonDragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonDragSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonDragSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonDragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonDragSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonDragSensitive)[] = {
          { Py_tp_methods, t_PythonDragSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonDragSensitive_init_ },
          { Py_tp_getset, t_PythonDragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonDragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonDragSensitive, t_PythonDragSensitive, PythonDragSensitive);

        void t_PythonDragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonDragSensitive), &PY_TYPE_DEF(PythonDragSensitive), module, "PythonDragSensitive", 1);
        }

        void t_PythonDragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "class_", make_descriptor(PythonDragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "wrapfn_", make_descriptor(t_PythonDragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonDragSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonDragSensitive_dragAcceleration0 },
            { "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonDragSensitive_dragAcceleration1 },
            { "getDragParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDragSensitive_getDragParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonDragSensitive_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonDragSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonDragSensitive::wrap_Object(PythonDragSensitive(((t_PythonDragSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonDragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonDragSensitive object((jobject) NULL);

          INT_CALL(object = PythonDragSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *o3 = JArray<jdouble>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OdOO", o0, (double) a1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a2));
          PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDragParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getDragParametersDrivers", result);
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

        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data)
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
#include "org/hipparchus/util/Precision.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Precision::class$ = NULL;
      jmethodID *Precision::mids$ = NULL;
      bool Precision::live$ = false;
      jdouble Precision::EPSILON = (jdouble) 0;
      jdouble Precision::SAFE_MIN = (jdouble) 0;

      jclass Precision::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Precision");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compareTo_5dea0bf915a3ae84] = env->getStaticMethodID(cls, "compareTo", "(DDD)I");
          mids$[mid_compareTo_0215a2b3b6aee269] = env->getStaticMethodID(cls, "compareTo", "(DDI)I");
          mids$[mid_equals_0fc66ee74538f12c] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_equals_9ad490520fb0d9af] = env->getStaticMethodID(cls, "equals", "(FF)Z");
          mids$[mid_equals_de33958d3e7816c8] = env->getStaticMethodID(cls, "equals", "(DDD)Z");
          mids$[mid_equals_39bf7eda27428270] = env->getStaticMethodID(cls, "equals", "(DDI)Z");
          mids$[mid_equals_f3017b7c37839e10] = env->getStaticMethodID(cls, "equals", "(FFF)Z");
          mids$[mid_equals_c9b26a4cbcab220f] = env->getStaticMethodID(cls, "equals", "(FFI)Z");
          mids$[mid_equalsIncludingNaN_0fc66ee74538f12c] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DD)Z");
          mids$[mid_equalsIncludingNaN_9ad490520fb0d9af] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FF)Z");
          mids$[mid_equalsIncludingNaN_de33958d3e7816c8] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDD)Z");
          mids$[mid_equalsIncludingNaN_f3017b7c37839e10] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFF)Z");
          mids$[mid_equalsIncludingNaN_39bf7eda27428270] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDI)Z");
          mids$[mid_equalsIncludingNaN_c9b26a4cbcab220f] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFI)Z");
          mids$[mid_equalsWithRelativeTolerance_de33958d3e7816c8] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(DDD)Z");
          mids$[mid_isMathematicalInteger_7bc657d327f0f830] = env->getStaticMethodID(cls, "isMathematicalInteger", "(D)Z");
          mids$[mid_isMathematicalInteger_b6aee6d092d77be8] = env->getStaticMethodID(cls, "isMathematicalInteger", "(F)Z");
          mids$[mid_representableDelta_82f92590f4247da1] = env->getStaticMethodID(cls, "representableDelta", "(DD)D");
          mids$[mid_round_988810e80d644418] = env->getStaticMethodID(cls, "round", "(DI)D");
          mids$[mid_round_52c941e30b3f23b6] = env->getStaticMethodID(cls, "round", "(FI)F");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EPSILON = env->getStaticDoubleField(cls, "EPSILON");
          SAFE_MIN = env->getStaticDoubleField(cls, "SAFE_MIN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_5dea0bf915a3ae84], a0, a1, a2);
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_0215a2b3b6aee269], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_0fc66ee74538f12c], a0, a1);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_9ad490520fb0d9af], a0, a1);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_de33958d3e7816c8], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_39bf7eda27428270], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f3017b7c37839e10], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_c9b26a4cbcab220f], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_0fc66ee74538f12c], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_9ad490520fb0d9af], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_de33958d3e7816c8], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_f3017b7c37839e10], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_39bf7eda27428270], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_c9b26a4cbcab220f], a0, a1, a2);
      }

      jboolean Precision::equalsWithRelativeTolerance(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_de33958d3e7816c8], a0, a1, a2);
      }

      jboolean Precision::isMathematicalInteger(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_7bc657d327f0f830], a0);
      }

      jboolean Precision::isMathematicalInteger(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_b6aee6d092d77be8], a0);
      }

      jdouble Precision::representableDelta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_representableDelta_82f92590f4247da1], a0, a1);
      }

      jdouble Precision::round(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_round_988810e80d644418], a0, a1);
      }

      jfloat Precision::round(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_round_52c941e30b3f23b6], a0, a1);
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
      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Precision__methods_[] = {
        DECLARE_METHOD(t_Precision, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, compareTo, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, isMathematicalInteger, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, representableDelta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, round, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Precision)[] = {
        { Py_tp_methods, t_Precision__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Precision)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Precision, t_Precision, Precision);

      void t_Precision::install(PyObject *module)
      {
        installType(&PY_TYPE(Precision), &PY_TYPE_DEF(Precision), module, "Precision", 0);
      }

      void t_Precision::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "class_", make_descriptor(Precision::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "wrapfn_", make_descriptor(t_Precision::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "boxfn_", make_descriptor(boxObject));
        env->getClass(Precision::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "EPSILON", make_descriptor(Precision::EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "SAFE_MIN", make_descriptor(Precision::SAFE_MIN));
      }

      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Precision::initializeClass, 1)))
          return NULL;
        return t_Precision::wrap_Object(Precision(((t_Precision *) arg)->object.this$));
      }
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Precision::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "compareTo", args);
        return NULL;
      }

      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jboolean result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jboolean result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMathematicalInteger", args);
        return NULL;
      }

      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::representableDelta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "representableDelta", args);
        return NULL;
      }

      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonNRLMSISE00InputParameters::class$ = NULL;
          jmethodID *PythonNRLMSISE00InputParameters::mids$ = NULL;
          bool PythonNRLMSISE00InputParameters::live$ = false;

          jclass PythonNRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAp_9b63d19c31941c0f] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_209f08246d708042] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_209f08246d708042] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNRLMSISE00InputParameters::PythonNRLMSISE00InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonNRLMSISE00InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonNRLMSISE00InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonNRLMSISE00InputParameters::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace atmosphere {
          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self);
          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_PythonNRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNRLMSISE00InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_PythonNRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonNRLMSISE00InputParameters_init_ },
            { Py_tp_getset, t_PythonNRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNRLMSISE00InputParameters, t_PythonNRLMSISE00InputParameters, PythonNRLMSISE00InputParameters);

          void t_PythonNRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNRLMSISE00InputParameters), &PY_TYPE_DEF(PythonNRLMSISE00InputParameters), module, "PythonNRLMSISE00InputParameters", 1);
          }

          void t_PythonNRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "class_", make_descriptor(PythonNRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_PythonNRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNRLMSISE00InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonNRLMSISE00InputParameters_getAp0 },
              { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getAverageFlux1 },
              { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getDailyFlux2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMinDate4 },
              { "pythonDecRef", "()V", (void *) t_PythonNRLMSISE00InputParameters_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonNRLMSISE00InputParameters::wrap_Object(PythonNRLMSISE00InputParameters(((t_PythonNRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonNRLMSISE00InputParameters object((jobject) NULL);

            INT_CALL(object = PythonNRLMSISE00InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args)
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getAp", result);
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

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAverageFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDailyFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$SatelliteAttitudeEphemeris::mids$ = NULL;
        bool AttitudeEphemerisFile$SatelliteAttitudeEphemeris::live$ = false;

        jclass AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_228bb29d53a1472e]));
        }

        ::java::lang::String AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        ::java::util::List AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$SatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris, t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris, AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self = (t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), &PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), module, "AttitudeEphemerisFile$SatelliteAttitudeEphemeris", 0);
        }

        void t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "class_", make_descriptor(AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::wrap_Object(AttitudeEphemerisFile$SatelliteAttitudeEphemeris(((t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_of_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getAttitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getId(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getSegments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStart(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_getStop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__attitudeProvider(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__id(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__segments(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__start(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_get__stop(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PotentialCoefficientsReader::class$ = NULL;
          jmethodID *PotentialCoefficientsReader::mids$ = NULL;
          bool PotentialCoefficientsReader::live$ = false;

          jclass PotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMaxAvailableDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_missingCoefficientsAllowed_eee3de00fe971136] = env->getMethodID(cls, "missingCoefficientsAllowed", "()Z");
              mids$[mid_setMaxParseDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setReadComplete_b35db77cae58639e] = env->getMethodID(cls, "setReadComplete", "(Z)V");
              mids$[mid_setAe_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAe", "(D)V");
              mids$[mid_setTideSystem_9bb8c9e1687750ae] = env->getMethodID(cls, "setTideSystem", "(Lorg/orekit/forces/gravity/potential/TideSystem;)V");
              mids$[mid_parseCoefficient_33876e9c717884ad] = env->getMethodID(cls, "parseCoefficient", "(Ljava/lang/String;Lorg/orekit/forces/gravity/potential/Flattener;[DIILjava/lang/String;Ljava/lang/String;)V");
              mids$[mid_setRawCoefficients_c01babe726b6f761] = env->getMethodID(cls, "setRawCoefficients", "(ZLorg/orekit/forces/gravity/potential/Flattener;[D[DLjava/lang/String;)V");
              mids$[mid_getBaseProvider_53620227e4e88d38] = env->getMethodID(cls, "getBaseProvider", "(ZII)Lorg/orekit/forces/gravity/potential/ConstantSphericalHarmonics;");
              mids$[mid_buildFlatArray_7915044ffca812bd] = env->getStaticMethodID(cls, "buildFlatArray", "(Lorg/orekit/forces/gravity/potential/Flattener;D)[D");
              mids$[mid_buildRow_77d4e204031b0229] = env->getStaticMethodID(cls, "buildRow", "(IID)[D");
              mids$[mid_toDate_bb97c745b89acad5] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_toDate_af5c997a6fa63020] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_rescale_aed4679379b294cb] = env->getMethodID(cls, "rescale", "(ZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;)[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;");
              mids$[mid_rescale_a33ccef86d94be5f] = env->getMethodID(cls, "rescale", "(DZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[D)[D");
              mids$[mid_parseDouble_f2fc085ab82846a3] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint PotentialCoefficientsReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_d6ab429752e7c267]);
          }

          jint PotentialCoefficientsReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_d6ab429752e7c267]);
          }

          jint PotentialCoefficientsReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_d6ab429752e7c267]);
          }

          jint PotentialCoefficientsReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_d6ab429752e7c267]);
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider PotentialCoefficientsReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_0c94c2344ee8a0fa], a0, a1, a2));
          }

          ::java::lang::String PotentialCoefficientsReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
          }

          void PotentialCoefficientsReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
          }

          jboolean PotentialCoefficientsReader::missingCoefficientsAllowed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_missingCoefficientsAllowed_eee3de00fe971136]);
          }

          void PotentialCoefficientsReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_8fd427ab23829bf5], a0);
          }

          void PotentialCoefficientsReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_8fd427ab23829bf5], a0);
          }

          jboolean PotentialCoefficientsReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseOrder),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, missingCoefficientsAllowed, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PotentialCoefficientsReader, t_PotentialCoefficientsReader, PotentialCoefficientsReader);

          void t_PotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PotentialCoefficientsReader), &PY_TYPE_DEF(PotentialCoefficientsReader), module, "PotentialCoefficientsReader", 0);
          }

          void t_PotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "class_", make_descriptor(PotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PotentialCoefficientsReader::wrap_Object(PotentialCoefficientsReader(((t_PotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getProvider", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.missingCoefficientsAllowed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *SimpleCurveFitter::class$ = NULL;
      jmethodID *SimpleCurveFitter::mids$ = NULL;
      bool SimpleCurveFitter::live$ = false;

      jclass SimpleCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/SimpleCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_7abc32a3f2924b2d] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/ParametricUnivariateFunction;[D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withMaxIterations_7951426b7700f81e] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withStartPoint_b7daaa3b0b731948] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_getProblem_51e01b60016ab388] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleCurveFitter SimpleCurveFitter::create(const ::org::hipparchus::analysis::ParametricUnivariateFunction & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_7abc32a3f2924b2d], a0.this$, a1.this$));
      }

      SimpleCurveFitter SimpleCurveFitter::withMaxIterations(jint a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_7951426b7700f81e], a0));
      }

      SimpleCurveFitter SimpleCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_b7daaa3b0b731948], a0.this$));
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
      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg);

      static PyMethodDef t_SimpleCurveFitter__methods_[] = {
        DECLARE_METHOD(t_SimpleCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_SimpleCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleCurveFitter)[] = {
        { Py_tp_methods, t_SimpleCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(SimpleCurveFitter, t_SimpleCurveFitter, SimpleCurveFitter);

      void t_SimpleCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleCurveFitter), &PY_TYPE_DEF(SimpleCurveFitter), module, "SimpleCurveFitter", 0);
      }

      void t_SimpleCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "class_", make_descriptor(SimpleCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "wrapfn_", make_descriptor(t_SimpleCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleCurveFitter::initializeClass, 1)))
          return NULL;
        return t_SimpleCurveFitter::wrap_Object(SimpleCurveFitter(((t_SimpleCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::ParametricUnivariateFunction a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::ParametricUnivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::SimpleCurveFitter::create(a0, a1));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg)
      {
        jint a0;
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Maneuvrable::class$ = NULL;
            jmethodID *Maneuvrable::mids$ = NULL;
            bool Maneuvrable::live$ = false;
            Maneuvrable *Maneuvrable::NO = NULL;
            Maneuvrable *Maneuvrable::N_A = NULL;
            Maneuvrable *Maneuvrable::YES = NULL;

            jclass Maneuvrable::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Maneuvrable");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEnum_15126eca79891041] = env->getStaticMethodID(cls, "getEnum", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getValue_d2c8eb4129821f0e] = env->getMethodID(cls, "getValue", "()Ljava/lang/String;");
                mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_15126eca79891041] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_values_5e414effabda3782] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new Maneuvrable(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                N_A = new Maneuvrable(env->getStaticObjectField(cls, "N_A", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                YES = new Maneuvrable(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Maneuvrable Maneuvrable::getEnum(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_getEnum_15126eca79891041], a0.this$));
            }

            ::java::lang::String Maneuvrable::getValue() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getValue_d2c8eb4129821f0e]));
            }

            ::java::lang::String Maneuvrable::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
            }

            Maneuvrable Maneuvrable::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_valueOf_15126eca79891041], a0.this$));
            }

            JArray< Maneuvrable > Maneuvrable::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< Maneuvrable >(env->callStaticObjectMethod(cls, mids$[mid_values_5e414effabda3782]));
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
          namespace cdm {
            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self);
            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_Maneuvrable_values(PyTypeObject *type);
            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data);
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data);
            static PyGetSetDef t_Maneuvrable__fields_[] = {
              DECLARE_GET_FIELD(t_Maneuvrable, value),
              DECLARE_GET_FIELD(t_Maneuvrable, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Maneuvrable__methods_[] = {
              DECLARE_METHOD(t_Maneuvrable, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, of_, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, getEnum, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, getValue, METH_NOARGS),
              DECLARE_METHOD(t_Maneuvrable, toString, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Maneuvrable)[] = {
              { Py_tp_methods, t_Maneuvrable__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Maneuvrable__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Maneuvrable)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(Maneuvrable, t_Maneuvrable, Maneuvrable);
            PyObject *t_Maneuvrable::wrap_Object(const Maneuvrable& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_Maneuvrable::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_Maneuvrable::install(PyObject *module)
            {
              installType(&PY_TYPE(Maneuvrable), &PY_TYPE_DEF(Maneuvrable), module, "Maneuvrable", 0);
            }

            void t_Maneuvrable::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "class_", make_descriptor(Maneuvrable::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "wrapfn_", make_descriptor(t_Maneuvrable::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "boxfn_", make_descriptor(boxObject));
              env->getClass(Maneuvrable::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "NO", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "N_A", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::N_A)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "YES", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::YES)));
            }

            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Maneuvrable::initializeClass, 1)))
                return NULL;
              return t_Maneuvrable::wrap_Object(Maneuvrable(((t_Maneuvrable *) arg)->object.this$));
            }
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Maneuvrable::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::getEnum(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "getEnum", arg);
              return NULL;
            }

            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getValue());
              return j2p(result);
            }

            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(Maneuvrable), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::valueOf(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_Maneuvrable_values(PyTypeObject *type)
            {
              JArray< Maneuvrable > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::values());
              return JArray<jobject>(result.this$).wrap(t_Maneuvrable::wrap_jobject);
            }
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getValue());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap::class$ = NULL;
      jmethodID *TimeSpanMap::mids$ = NULL;
      bool TimeSpanMap::live$ = false;

      jclass TimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_83ee235bb1e64e94] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
          mids$[mid_addValidAfter_6a96ca70f196c91a] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBefore_6a96ca70f196c91a] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBetween_e686ab6fdd0f2c77] = env->getMethodID(cls, "addValidBetween", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_extractRange_d943d113c5f78644] = env->getMethodID(cls, "extractRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_get_97aeacdc44f4297e] = env->getMethodID(cls, "get", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getFirstSpan_ea49fa2ad441b95d] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getFirstTransition_1026700a6787ef22] = env->getMethodID(cls, "getFirstTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getLastSpan_ea49fa2ad441b95d] = env->getMethodID(cls, "getLastSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getLastTransition_1026700a6787ef22] = env->getMethodID(cls, "getLastTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getSpan_7b19e06f3155cde2] = env->getMethodID(cls, "getSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpansNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSpansNumber", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeSpanMap::TimeSpanMap(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83ee235bb1e64e94, a0.this$)) {}

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidAfter_6a96ca70f196c91a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBefore_6a96ca70f196c91a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBetween(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBetween_e686ab6fdd0f2c77], a0.this$, a1.this$, a2.this$));
      }

      TimeSpanMap TimeSpanMap::extractRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractRange_d943d113c5f78644], a0.this$, a1.this$));
      }

      ::java::lang::Object TimeSpanMap::get$(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_97aeacdc44f4297e], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getFirstSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_ea49fa2ad441b95d]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getFirstTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getFirstTransition_1026700a6787ef22]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getLastSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getLastSpan_ea49fa2ad441b95d]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getLastTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getLastTransition_1026700a6787ef22]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpan_7b19e06f3155cde2], a0.this$));
      }

      jint TimeSpanMap::getSpansNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getSpansNumber_d6ab429752e7c267]);
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
      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args);
      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data);
      static PyGetSetDef t_TimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap, firstSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, firstTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, spansNumber),
        DECLARE_GET_FIELD(t_TimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBetween, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, extractRange, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getFirstSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getFirstTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getSpan, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getSpansNumber, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap)[] = {
        { Py_tp_methods, t_TimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_TimeSpanMap_init_ },
        { Py_tp_getset, t_TimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap, t_TimeSpanMap, TimeSpanMap);
      PyObject *t_TimeSpanMap::wrap_Object(const TimeSpanMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap), &PY_TYPE_DEF(TimeSpanMap), module, "TimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Span", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Span)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Transition)));
      }

      void t_TimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "class_", make_descriptor(TimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "wrapfn_", make_descriptor(t_TimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap::wrap_Object(TimeSpanMap(((t_TimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        TimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "o", &a0))
        {
          INT_CALL(object = TimeSpanMap(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidAfter(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBefore(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "Okk", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBetween(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBetween", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeSpanMap result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractRange(a0, a1));
          return t_TimeSpanMap::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "extractRange", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSpan(a0));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSpan", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSpansNumber());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSpansNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessMultivariateStatistic::class$ = NULL;
        jmethodID *StorelessMultivariateStatistic::mids$ = NULL;
        bool StorelessMultivariateStatistic::live$ = false;

        jclass StorelessMultivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessMultivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_be783177b060994b] = env->getMethodID(cls, "getResult", "()[D");
            mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessMultivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        jint StorelessMultivariateStatistic::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        jlong StorelessMultivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        JArray< jdouble > StorelessMultivariateStatistic::getResult() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_be783177b060994b]));
        }

        void StorelessMultivariateStatistic::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
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
        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessMultivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, dimension),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessMultivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessMultivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessMultivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessMultivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessMultivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessMultivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StorelessMultivariateStatistic, t_StorelessMultivariateStatistic, StorelessMultivariateStatistic);

        void t_StorelessMultivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessMultivariateStatistic), &PY_TYPE_DEF(StorelessMultivariateStatistic), module, "StorelessMultivariateStatistic", 0);
        }

        void t_StorelessMultivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "class_", make_descriptor(StorelessMultivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "wrapfn_", make_descriptor(t_StorelessMultivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessMultivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessMultivariateStatistic::wrap_Object(StorelessMultivariateStatistic(((t_StorelessMultivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessMultivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getResult());
          return result.wrap();
        }

        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getResult());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClockParser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/Class.h"
#include "java/io/BufferedReader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClockParser::class$ = NULL;
          jmethodID *RinexClockParser::mids$ = NULL;
          bool RinexClockParser::live$ = false;

          jclass RinexClockParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClockParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_parse_06c985c3eddbefaa] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_01328511d1f73a85] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_31937c8cd9f7381b] = env->getMethodID(cls, "parse", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClockParser::RinexClockParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::InputStream & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_06c985c3eddbefaa], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_01328511d1f73a85], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::BufferedReader & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_31937c8cd9f7381b], a0.this$, a1.this$));
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
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args);

          static PyMethodDef t_RinexClockParser__methods_[] = {
            DECLARE_METHOD(t_RinexClockParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClockParser)[] = {
            { Py_tp_methods, t_RinexClockParser__methods_ },
            { Py_tp_init, (void *) t_RinexClockParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClockParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClockParser, t_RinexClockParser, RinexClockParser);

          void t_RinexClockParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClockParser), &PY_TYPE_DEF(RinexClockParser), module, "RinexClockParser", 0);
          }

          void t_RinexClockParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "class_", make_descriptor(RinexClockParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "wrapfn_", make_descriptor(t_RinexClockParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClockParser::initializeClass, 1)))
              return NULL;
            return t_RinexClockParser::wrap_Object(RinexClockParser(((t_RinexClockParser *) arg)->object.this$));
          }
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClockParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds)
          {
            RinexClockParser object((jobject) NULL);

            INT_CALL(object = RinexClockParser());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::io::InputStream a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::io::BufferedReader a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "ks", ::java::io::BufferedReader::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
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
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState$EventOccurrence::class$ = NULL;
        jmethodID *EventState$EventOccurrence::mids$ = NULL;
        bool EventState$EventOccurrence::live$ = false;

        jclass EventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_e01ac4830bcfb38f] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_8fbfa58855031235] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStopDate_80e11148db499dda] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action EventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_e01ac4830bcfb38f]));
        }

        ::org::orekit::propagation::SpacecraftState EventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_8fbfa58855031235]));
        }

        ::org::orekit::time::AbsoluteDate EventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_80e11148db499dda]));
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
        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_EventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState$EventOccurrence)[] = {
          { Py_tp_methods, t_EventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState$EventOccurrence, t_EventState$EventOccurrence, EventState$EventOccurrence);
        PyObject *t_EventState$EventOccurrence::wrap_Object(const EventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState$EventOccurrence), &PY_TYPE_DEF(EventState$EventOccurrence), module, "EventState$EventOccurrence", 0);
        }

        void t_EventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "class_", make_descriptor(EventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "wrapfn_", make_descriptor(t_EventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventState$EventOccurrence::wrap_Object(EventState$EventOccurrence(((t_EventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999Max::class$ = NULL;
              jmethodID *Alfriend1999Max::mids$ = NULL;
              bool Alfriend1999Max::live$ = false;

              jclass Alfriend1999Max::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_computeValue_db06d8c3fc3d9670] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_3130e338b3b4d904] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999Max::Alfriend1999Max() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble Alfriend1999Max::computeValue(jdouble a0, jdouble a1, jdouble a2) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeValue_db06d8c3fc3d9670], a0, a1, a2);
              }

              ::org::hipparchus::CalculusFieldElement Alfriend1999Max::computeValue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeValue_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999Max::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
              }

              jboolean Alfriend1999Max::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136]);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data);
              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data);
              static PyGetSetDef t_Alfriend1999Max__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999Max, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999Max, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999Max__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999Max, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, computeValue, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999Max)[] = {
                { Py_tp_methods, t_Alfriend1999Max__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999Max_init_ },
                { Py_tp_getset, t_Alfriend1999Max__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999Max)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999Max, t_Alfriend1999Max, Alfriend1999Max);

              void t_Alfriend1999Max::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999Max), &PY_TYPE_DEF(Alfriend1999Max), module, "Alfriend1999Max", 0);
              }

              void t_Alfriend1999Max::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "class_", make_descriptor(Alfriend1999Max::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "wrapfn_", make_descriptor(t_Alfriend1999Max::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999Max::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999Max::wrap_Object(Alfriend1999Max(((t_Alfriend1999Max *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999Max::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999Max object((jobject) NULL);

                INT_CALL(object = Alfriend1999Max());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble result;

                    if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeValue", args);
                return NULL;
              }

              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/stat/Frequency.h"
#include "java/util/Iterator.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/lang/Long.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/stat/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_bee08e6612998c92] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_0167441dcd8c0b87] = env->getMethodID(cls, "addValue", "(Ljava/lang/Comparable;)V");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_entrySetIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "entrySetIterator", "()Ljava/util/Iterator;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCount_a2cca1d1341d3e89] = env->getMethodID(cls, "getCount", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumFreq_a2cca1d1341d3e89] = env->getMethodID(cls, "getCumFreq", "(Ljava/lang/Comparable;)J");
          mids$[mid_getCumPct_c6d2d8ad45936331] = env->getMethodID(cls, "getCumPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getMode_d751c1a57012b438] = env->getMethodID(cls, "getMode", "()Ljava/util/List;");
          mids$[mid_getPct_c6d2d8ad45936331] = env->getMethodID(cls, "getPct", "(Ljava/lang/Comparable;)D");
          mids$[mid_getSumFreq_42c72b98e3c2e08a] = env->getMethodID(cls, "getSumFreq", "()J");
          mids$[mid_getUniqueCount_d6ab429752e7c267] = env->getMethodID(cls, "getUniqueCount", "()I");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_incrementValue_3ae83e2fcc282f77] = env->getMethodID(cls, "incrementValue", "(Ljava/lang/Comparable;J)V");
          mids$[mid_merge_6dde6c7b755a7791] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/stat/Frequency;)V");
          mids$[mid_merge_82af91bc8dfb5029] = env->getMethodID(cls, "merge", "(Ljava/util/Collection;)V");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_valuesIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "valuesIterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frequency::Frequency() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Frequency::Frequency(const ::java::util::Comparator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bee08e6612998c92, a0.this$)) {}

      void Frequency::addValue(const ::java::lang::Comparable & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_0167441dcd8c0b87], a0.this$);
      }

      void Frequency::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
      }

      ::java::util::Iterator Frequency::entrySetIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_entrySetIterator_4f613ccd2f803b4b]));
      }

      jboolean Frequency::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jlong Frequency::getCount(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_a2cca1d1341d3e89], a0.this$);
      }

      jlong Frequency::getCumFreq(const ::java::lang::Comparable & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_a2cca1d1341d3e89], a0.this$);
      }

      jdouble Frequency::getCumPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_c6d2d8ad45936331], a0.this$);
      }

      ::java::util::List Frequency::getMode() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMode_d751c1a57012b438]));
      }

      jdouble Frequency::getPct(const ::java::lang::Comparable & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_c6d2d8ad45936331], a0.this$);
      }

      jlong Frequency::getSumFreq() const
      {
        return env->callLongMethod(this$, mids$[mid_getSumFreq_42c72b98e3c2e08a]);
      }

      jint Frequency::getUniqueCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getUniqueCount_d6ab429752e7c267]);
      }

      jint Frequency::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      void Frequency::incrementValue(const ::java::lang::Comparable & a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_3ae83e2fcc282f77], a0.this$, a1);
      }

      void Frequency::merge(const Frequency & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_6dde6c7b755a7791], a0.this$);
      }

      void Frequency::merge(const ::java::util::Collection & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_merge_82af91bc8dfb5029], a0.this$);
      }

      ::java::lang::String Frequency::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::util::Iterator Frequency::valuesIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_valuesIterator_4f613ccd2f803b4b]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_clear(t_Frequency *self);
      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self);
      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getMode(t_Frequency *self);
      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg);
      static PyObject *t_Frequency_getSumFreq(t_Frequency *self);
      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self);
      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_valuesIterator(t_Frequency *self);
      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mode),
        DECLARE_GET_FIELD(t_Frequency, sumFreq),
        DECLARE_GET_FIELD(t_Frequency, uniqueCount),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, addValue, METH_O),
        DECLARE_METHOD(t_Frequency, clear, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, entrySetIterator, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, equals, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getCount, METH_O),
        DECLARE_METHOD(t_Frequency, getCumFreq, METH_O),
        DECLARE_METHOD(t_Frequency, getCumPct, METH_O),
        DECLARE_METHOD(t_Frequency, getMode, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getPct, METH_O),
        DECLARE_METHOD(t_Frequency, getSumFreq, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getUniqueCount, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, incrementValue, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, merge, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, toString, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, valuesIterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) t_Frequency_init_ },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Frequency_init_(t_Frequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Frequency object((jobject) NULL);

            INT_CALL(object = Frequency());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Frequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = Frequency(a0));
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

      static PyObject *t_Frequency_addValue(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValue", arg);
        return NULL;
      }

      static PyObject *t_Frequency_clear(t_Frequency *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_Frequency_entrySetIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.entrySetIterator());
        return ::java::util::t_Iterator::wrap_Object(result);
      }

      static PyObject *t_Frequency_equals(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Frequency_getCount(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumFreq(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumFreq", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getCumPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCumPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getMode(t_Frequency *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getMode());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Frequency_getPct(t_Frequency *self, PyObject *arg)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPct", arg);
        return NULL;
      }

      static PyObject *t_Frequency_getSumFreq(t_Frequency *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Frequency_getUniqueCount(t_Frequency *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getUniqueCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frequency_hashCode(t_Frequency *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Frequency_incrementValue(t_Frequency *self, PyObject *args)
      {
        ::java::lang::Comparable a0((jobject) NULL);
        PyTypeObject **p0;
        jlong a1;

        if (!parseArgs(args, "KJ", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "incrementValue", args);
        return NULL;
      }

      static PyObject *t_Frequency_merge(t_Frequency *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Frequency a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", Frequency::initializeClass, &a0, &p0, t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(self->object.merge(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "merge", args);
        return NULL;
      }

      static PyObject *t_Frequency_toString(t_Frequency *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frequency), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frequency_valuesIterator(t_Frequency *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.valuesIterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mode(t_Frequency *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getMode());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__sumFreq(t_Frequency *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getSumFreq());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_Frequency_get__uniqueCount(t_Frequency *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getUniqueCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *ByteArrayEncodedMessage::class$ = NULL;
          jmethodID *ByteArrayEncodedMessage::mids$ = NULL;
          bool ByteArrayEncodedMessage::live$ = false;

          jclass ByteArrayEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/ByteArrayEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bba2a19638de22ff] = env->getMethodID(cls, "<init>", "([B)V");
              mids$[mid_start_ff7cb6c242604316] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ByteArrayEncodedMessage::ByteArrayEncodedMessage(const JArray< jbyte > & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_bba2a19638de22ff, a0.this$)) {}

          void ByteArrayEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_ff7cb6c242604316]);
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
          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args);

          static PyMethodDef t_ByteArrayEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_ByteArrayEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ByteArrayEncodedMessage)[] = {
            { Py_tp_methods, t_ByteArrayEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_ByteArrayEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ByteArrayEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(ByteArrayEncodedMessage, t_ByteArrayEncodedMessage, ByteArrayEncodedMessage);

          void t_ByteArrayEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ByteArrayEncodedMessage), &PY_TYPE_DEF(ByteArrayEncodedMessage), module, "ByteArrayEncodedMessage", 0);
          }

          void t_ByteArrayEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "class_", make_descriptor(ByteArrayEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "wrapfn_", make_descriptor(t_ByteArrayEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ByteArrayEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_ByteArrayEncodedMessage::wrap_Object(ByteArrayEncodedMessage(((t_ByteArrayEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ByteArrayEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            ByteArrayEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              INT_CALL(object = ByteArrayEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ByteArrayEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PascalDistribution::class$ = NULL;
        jmethodID *PascalDistribution::mids$ = NULL;
        bool PascalDistribution::live$ = false;

        jclass PascalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PascalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PascalDistribution::PascalDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

        jdouble PascalDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jint PascalDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_d6ab429752e7c267]);
        }

        jdouble PascalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble PascalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble PascalDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6]);
        }

        jint PascalDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint PascalDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean PascalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble PascalDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble PascalDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
      namespace discrete {
        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data);
        static PyGetSetDef t_PascalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PascalDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PascalDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_PascalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PascalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PascalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PascalDistribution__methods_[] = {
          DECLARE_METHOD(t_PascalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PascalDistribution)[] = {
          { Py_tp_methods, t_PascalDistribution__methods_ },
          { Py_tp_init, (void *) t_PascalDistribution_init_ },
          { Py_tp_getset, t_PascalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PascalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PascalDistribution, t_PascalDistribution, PascalDistribution);

        void t_PascalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PascalDistribution), &PY_TYPE_DEF(PascalDistribution), module, "PascalDistribution", 0);
        }

        void t_PascalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "class_", make_descriptor(PascalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "wrapfn_", make_descriptor(t_PascalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PascalDistribution::initializeClass, 1)))
            return NULL;
          return t_PascalDistribution::wrap_Object(PascalDistribution(((t_PascalDistribution *) arg)->object.this$));
        }
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PascalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          PascalDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = PascalDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TriangularDistribution::class$ = NULL;
        jmethodID *TriangularDistribution::mids$ = NULL;
        bool TriangularDistribution::live$ = false;

        jclass TriangularDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TriangularDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMode_9981f74b2d109da6] = env->getMethodID(cls, "getMode", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TriangularDistribution::TriangularDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble TriangularDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble TriangularDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble TriangularDistribution::getMode() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMode_9981f74b2d109da6]);
        }

        jdouble TriangularDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble TriangularDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble TriangularDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble TriangularDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble TriangularDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean TriangularDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self);
        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data);
        static PyGetSetDef t_TriangularDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TriangularDistribution, mode),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TriangularDistribution__methods_[] = {
          DECLARE_METHOD(t_TriangularDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getMode, METH_NOARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TriangularDistribution)[] = {
          { Py_tp_methods, t_TriangularDistribution__methods_ },
          { Py_tp_init, (void *) t_TriangularDistribution_init_ },
          { Py_tp_getset, t_TriangularDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TriangularDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TriangularDistribution, t_TriangularDistribution, TriangularDistribution);

        void t_TriangularDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TriangularDistribution), &PY_TYPE_DEF(TriangularDistribution), module, "TriangularDistribution", 0);
        }

        void t_TriangularDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "class_", make_descriptor(TriangularDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "wrapfn_", make_descriptor(t_TriangularDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TriangularDistribution::initializeClass, 1)))
            return NULL;
          return t_TriangularDistribution::wrap_Object(TriangularDistribution(((t_TriangularDistribution *) arg)->object.this$));
        }
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TriangularDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          TriangularDistribution object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = TriangularDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMode());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMode());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *AttitudeEphemerisFileParser::mids$ = NULL;
        bool AttitudeEphemerisFileParser::live$ = false;

        jclass AttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_498b7d4fef347b9b] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::AttitudeEphemerisFile AttitudeEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::AttitudeEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_498b7d4fef347b9b], a0.this$));
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
        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileParser, t_AttitudeEphemerisFileParser, AttitudeEphemerisFileParser);
        PyObject *t_AttitudeEphemerisFileParser::wrap_Object(const AttitudeEphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileParser), &PY_TYPE_DEF(AttitudeEphemerisFileParser), module, "AttitudeEphemerisFileParser", 0);
        }

        void t_AttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "class_", make_descriptor(AttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileParser::wrap_Object(AttitudeEphemerisFileParser(((t_AttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::AttitudeEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateFunction::mids$ = NULL;
      bool CalculusFieldMultivariateFunction::live$ = false;

      jclass CalculusFieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_c04968ee695d037c] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c04968ee695d037c], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateFunction, t_CalculusFieldMultivariateFunction, CalculusFieldMultivariateFunction);
      PyObject *t_CalculusFieldMultivariateFunction::wrap_Object(const CalculusFieldMultivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateFunction), &PY_TYPE_DEF(CalculusFieldMultivariateFunction), module, "CalculusFieldMultivariateFunction", 0);
      }

      void t_CalculusFieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "class_", make_descriptor(CalculusFieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateFunction::wrap_Object(CalculusFieldMultivariateFunction(((t_CalculusFieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolverUtils::class$ = NULL;
        jmethodID *UnivariateSolverUtils::mids$ = NULL;
        bool UnivariateSolverUtils::live$ = false;

        jclass UnivariateSolverUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolverUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_bracket_e3f421790ff933be] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)[D");
            mids$[mid_bracket_e46afa233273adfb] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_dddc38e6e775dbf1] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_b5a9fea683362dcf] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDI)[D");
            mids$[mid_bracket_3ca7c0fdd4b9ad45] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_ecf3e65a7cf8fbcf] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDDDI)[D");
            mids$[mid_forceSide_d9f29460303e6086] = env->getStaticMethodID(cls, "forceSide", "(ILorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_isBracketing_3128f9dde8ed0864] = env->getStaticMethodID(cls, "isBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)Z");
            mids$[mid_isSequence_de33958d3e7816c8] = env->getStaticMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_midpoint_82f92590f4247da1] = env->getStaticMethodID(cls, "midpoint", "(DD)D");
            mids$[mid_solve_fdd56ebd95eae6c2] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_c95a4e4458ad3d65] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_verifyBracketing_ea7556216ba6c251] = env->getStaticMethodID(cls, "verifyBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)V");
            mids$[mid_verifyInterval_13edac039e8cc967] = env->getStaticMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_bd28dc6055dc5bbd] = env->getStaticMethodID(cls, "verifySequence", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_e3f421790ff933be], a0.this$, a1, a2, a3));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_e46afa233273adfb], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_dddc38e6e775dbf1], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_b5a9fea683362dcf], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_3ca7c0fdd4b9ad45], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_ecf3e65a7cf8fbcf], a0.this$, a1, a2, a3, a4, a5, a6));
        }

        jdouble UnivariateSolverUtils::forceSide(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::hipparchus::analysis::solvers::AllowedSolution & a6)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_forceSide_d9f29460303e6086], a0, a1.this$, a2.this$, a3, a4, a5, a6.this$);
        }

        jboolean UnivariateSolverUtils::isBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isBracketing_3128f9dde8ed0864], a0.this$, a1, a2);
        }

        jboolean UnivariateSolverUtils::isSequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isSequence_de33958d3e7816c8], a0, a1, a2);
        }

        jdouble UnivariateSolverUtils::midpoint(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_midpoint_82f92590f4247da1], a0, a1);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_fdd56ebd95eae6c2], a0.this$, a1, a2);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_c95a4e4458ad3d65], a0.this$, a1, a2, a3);
        }

        void UnivariateSolverUtils::verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyBracketing_ea7556216ba6c251], a0.this$, a1, a2);
        }

        void UnivariateSolverUtils::verifyInterval(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyInterval_13edac039e8cc967], a0, a1);
        }

        void UnivariateSolverUtils::verifySequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifySequence_bd28dc6055dc5bbd], a0, a1, a2);
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
      namespace solvers {
        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_UnivariateSolverUtils__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolverUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, bracket, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, forceSide, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isSequence, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, midpoint, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, solve, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifySequence, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolverUtils)[] = {
          { Py_tp_methods, t_UnivariateSolverUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolverUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateSolverUtils, t_UnivariateSolverUtils, UnivariateSolverUtils);

        void t_UnivariateSolverUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolverUtils), &PY_TYPE_DEF(UnivariateSolverUtils), module, "UnivariateSolverUtils", 0);
        }

        void t_UnivariateSolverUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "class_", make_descriptor(UnivariateSolverUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "wrapfn_", make_descriptor(t_UnivariateSolverUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolverUtils::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolverUtils::wrap_Object(UnivariateSolverUtils(((t_UnivariateSolverUtils *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolverUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return result.wrap();
              }
            }
            break;
           case 5:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            break;
           case 7:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jint a6;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
              PyTypeObject **p5;
              jint a6;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError(type, "bracket", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::hipparchus::analysis::solvers::AllowedSolution a6((jobject) NULL);
          PyTypeObject **p6;
          jdouble result;

          if (!parseArgs(args, "IkKDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_, &a3, &a4, &a5, &a6, &p6, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::forceSide(a0, a1, a2, a3, a4, a5, a6));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "forceSide", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isBracketing(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isSequence(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isSequence", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::midpoint(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "midpoint", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "solve", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyBracketing(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyInterval(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyInterval", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifySequence(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifySequence", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemeris::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemeris::mids$ = NULL;
        bool STKEphemerisFile$STKEphemeris::live$ = false;

        jclass STKEphemerisFile$STKEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_efa13fade9859f0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemeris::STKEphemerisFile$STKEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efa13fade9859f0d, a0.this$, a1, a2.this$)) {}

        ::java::lang::String STKEphemerisFile$STKEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        jdouble STKEphemerisFile$STKEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::java::util::List STKEphemerisFile$STKEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, id),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, segments),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemeris__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemeris)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemeris__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemeris_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemeris, t_STKEphemerisFile$STKEphemeris, STKEphemerisFile$STKEphemeris);

        void t_STKEphemerisFile$STKEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemeris), &PY_TYPE_DEF(STKEphemerisFile$STKEphemeris), module, "STKEphemerisFile$STKEphemeris", 0);
        }

        void t_STKEphemerisFile$STKEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "class_", make_descriptor(STKEphemerisFile$STKEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemeris::wrap_Object(STKEphemerisFile$STKEphemeris(((t_STKEphemerisFile$STKEphemeris *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          STKEphemerisFile$STKEphemeris object((jobject) NULL);

          if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemeris(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemerisSegment));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/PrintStream.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/File.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintStream::class$ = NULL;
    jmethodID *PrintStream::mids$ = NULL;
    bool PrintStream::live$ = false;

    jclass PrintStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_da52d6defb468793] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e73c97ae824bba63] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_0d7a9075a057453b] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_a34c1807509034a7] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
        mids$[mid_append_544e826c1ff0bf31] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintStream;");
        mids$[mid_append_8000ca83dcdf4e5f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
        mids$[mid_append_e8426d9ad26245a5] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
        mids$[mid_checkError_eee3de00fe971136] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_dc6a2fa85fdfc412] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_format_67e6c2092d224f02] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_print_e22e96b35f4145e4] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_105e1eadb709d9ac] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_b35db77cae58639e] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_e8d07df586815a42] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_1ad26e8c8c0cd65b] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_11c95dcd1c301708] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_8fd427ab23829bf5] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_83ee235bb1e64e94] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_f5bbab7e97879358] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_dc6a2fa85fdfc412] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_printf_67e6c2092d224f02] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_println_ff7cb6c242604316] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_e22e96b35f4145e4] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_105e1eadb709d9ac] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_b35db77cae58639e] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_e8d07df586815a42] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_1ad26e8c8c0cd65b] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_11c95dcd1c301708] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_8fd427ab23829bf5] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_83ee235bb1e64e94] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_f5bbab7e97879358] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_setError_ff7cb6c242604316] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_ff7cb6c242604316] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintStream::PrintStream(const ::java::io::File & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_da52d6defb468793, a0.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_e73c97ae824bba63, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_0d7a9075a057453b, a0.this$, a1)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1, const ::java::lang::String & a2) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_a34c1807509034a7, a0.this$, a1, a2.this$)) {}

    PrintStream PrintStream::append(jchar a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_544e826c1ff0bf31], a0));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_8000ca83dcdf4e5f], a0.this$));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_e8426d9ad26245a5], a0.this$, a1, a2));
    }

    jboolean PrintStream::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_eee3de00fe971136]);
    }

    void PrintStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void PrintStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    PrintStream PrintStream::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_dc6a2fa85fdfc412], a0.this$, a1.this$));
    }

    PrintStream PrintStream::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_67e6c2092d224f02], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e22e96b35f4145e4], a0.this$);
    }

    void PrintStream::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_105e1eadb709d9ac], a0.this$);
    }

    void PrintStream::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_b35db77cae58639e], a0);
    }

    void PrintStream::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e8d07df586815a42], a0);
    }

    void PrintStream::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_1ad26e8c8c0cd65b], a0);
    }

    void PrintStream::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_11c95dcd1c301708], a0);
    }

    void PrintStream::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_8fd427ab23829bf5], a0);
    }

    void PrintStream::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_83ee235bb1e64e94], a0.this$);
    }

    void PrintStream::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f5bbab7e97879358], a0);
    }

    PrintStream PrintStream::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_dc6a2fa85fdfc412], a0.this$, a1.this$));
    }

    PrintStream PrintStream::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_67e6c2092d224f02], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_ff7cb6c242604316]);
    }

    void PrintStream::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e22e96b35f4145e4], a0.this$);
    }

    void PrintStream::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_105e1eadb709d9ac], a0.this$);
    }

    void PrintStream::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_b35db77cae58639e], a0);
    }

    void PrintStream::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e8d07df586815a42], a0);
    }

    void PrintStream::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_1ad26e8c8c0cd65b], a0);
    }

    void PrintStream::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_11c95dcd1c301708], a0);
    }

    void PrintStream::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_8fd427ab23829bf5], a0);
    }

    void PrintStream::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_83ee235bb1e64e94], a0.this$);
    }

    void PrintStream::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f5bbab7e97879358], a0);
    }

    void PrintStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void PrintStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_checkError(t_PrintStream *self);
    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args);

    static PyMethodDef t_PrintStream__methods_[] = {
      DECLARE_METHOD(t_PrintStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintStream, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintStream)[] = {
      { Py_tp_methods, t_PrintStream__methods_ },
      { Py_tp_init, (void *) t_PrintStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintStream)[] = {
      &PY_TYPE_DEF(::java::io::FilterOutputStream),
      NULL
    };

    DEFINE_TYPE(PrintStream, t_PrintStream, PrintStream);

    void t_PrintStream::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintStream), &PY_TYPE_DEF(PrintStream), module, "PrintStream", 0);
    }

    void t_PrintStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "class_", make_descriptor(PrintStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "wrapfn_", make_descriptor(t_PrintStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintStream::initializeClass, 1)))
        return NULL;
      return t_PrintStream::wrap_Object(PrintStream(((t_PrintStream *) arg)->object.this$));
    }
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          ::java::lang::String a2((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZs", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PrintStream(a0, a1, a2));
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

    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_PrintStream_checkError(t_PrintStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
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
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "write", args, 2);
    }
  }
}
