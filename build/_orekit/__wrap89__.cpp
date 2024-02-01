#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Floor::class$ = NULL;
        jmethodID *Floor::mids$ = NULL;
        bool Floor::live$ = false;

        jclass Floor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Floor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Floor::Floor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Floor::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Floor::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Floor_value(t_Floor *self, PyObject *args);

        static PyMethodDef t_Floor__methods_[] = {
          DECLARE_METHOD(t_Floor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Floor)[] = {
          { Py_tp_methods, t_Floor__methods_ },
          { Py_tp_init, (void *) t_Floor_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Floor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Floor, t_Floor, Floor);

        void t_Floor::install(PyObject *module)
        {
          installType(&PY_TYPE(Floor), &PY_TYPE_DEF(Floor), module, "Floor", 0);
        }

        void t_Floor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "class_", make_descriptor(Floor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "wrapfn_", make_descriptor(t_Floor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Floor::initializeClass, 1)))
            return NULL;
          return t_Floor::wrap_Object(Floor(((t_Floor *) arg)->object.this$));
        }
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Floor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds)
        {
          Floor object((jobject) NULL);

          INT_CALL(object = Floor());
          self->object = object;

          return 0;
        }

        static PyObject *t_Floor_value(t_Floor *self, PyObject *args)
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
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolver::class$ = NULL;
        jmethodID *UnivariateSolver::mids$ = NULL;
        bool UnivariateSolver::live$ = false;

        jclass UnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolver)[] = {
          { Py_tp_methods, t_UnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateSolver, t_UnivariateSolver, UnivariateSolver);

        void t_UnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolver), &PY_TYPE_DEF(UnivariateSolver), module, "UnivariateSolver", 0);
        }

        void t_UnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "class_", make_descriptor(UnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "wrapfn_", make_descriptor(t_UnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolver::wrap_Object(UnivariateSolver(((t_UnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassNotFoundException::class$ = NULL;
    jmethodID *ClassNotFoundException::mids$ = NULL;
    bool ClassNotFoundException::live$ = false;

    jclass ClassNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_getCause_a725264cecc16b6f] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getException_a725264cecc16b6f] = env->getMethodID(cls, "getException", "()Ljava/lang/Throwable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ClassNotFoundException::ClassNotFoundException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}

    ::java::lang::Throwable ClassNotFoundException::getCause() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getCause_a725264cecc16b6f]));
    }

    ::java::lang::Throwable ClassNotFoundException::getException() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getException_a725264cecc16b6f]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args);
    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self);
    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data);
    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data);
    static PyGetSetDef t_ClassNotFoundException__fields_[] = {
      DECLARE_GET_FIELD(t_ClassNotFoundException, cause),
      DECLARE_GET_FIELD(t_ClassNotFoundException, exception),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassNotFoundException__methods_[] = {
      DECLARE_METHOD(t_ClassNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, getCause, METH_VARARGS),
      DECLARE_METHOD(t_ClassNotFoundException, getException, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassNotFoundException)[] = {
      { Py_tp_methods, t_ClassNotFoundException__methods_ },
      { Py_tp_init, (void *) t_ClassNotFoundException_init_ },
      { Py_tp_getset, t_ClassNotFoundException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassNotFoundException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(ClassNotFoundException, t_ClassNotFoundException, ClassNotFoundException);

    void t_ClassNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassNotFoundException), &PY_TYPE_DEF(ClassNotFoundException), module, "ClassNotFoundException", 0);
    }

    void t_ClassNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "class_", make_descriptor(ClassNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "wrapfn_", make_descriptor(t_ClassNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassNotFoundException::initializeClass, 1)))
        return NULL;
      return t_ClassNotFoundException::wrap_Object(ClassNotFoundException(((t_ClassNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ClassNotFoundException object((jobject) NULL);

          INT_CALL(object = ClassNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ClassNotFoundException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ClassNotFoundException(a0, a1));
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

    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args)
    {
      ::java::lang::Throwable result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCause());
        return ::java::lang::t_Throwable::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ClassNotFoundException), (PyObject *) self, "getCause", args, 2);
    }

    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self)
    {
      ::java::lang::Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(result);
    }

    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }

    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger.h"
#include "java/util/function/Supplier.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/Throwable.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System$Logger::class$ = NULL;
    jmethodID *System$Logger::mids$ = NULL;
    bool System$Logger::live$ = false;

    jclass System$Logger::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System$Logger");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_isLoggable_6482ac68f75b234a] = env->getMethodID(cls, "isLoggable", "(Ljava/lang/System$Logger$Level;)Z");
        mids$[mid_log_35b756f3c0150a68] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V");
        mids$[mid_log_e24e7e06b7dd1d55] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V");
        mids$[mid_log_c5ea91070c7877af] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V");
        mids$[mid_log_87b1e104721cc475] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_c7e83afb098bc0c7] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_log_454c3d5cce8beda5] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V");
        mids$[mid_log_d846c53c1be12311] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_9141164ca925417e] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jboolean System$Logger::isLoggable(const ::java::lang::System$Logger$Level & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLoggable_6482ac68f75b234a], a0.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_35b756f3c0150a68], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_e24e7e06b7dd1d55], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_c5ea91070c7877af], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_87b1e104721cc475], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_c7e83afb098bc0c7], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_454c3d5cce8beda5], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const JArray< ::java::lang::Object > & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_d846c53c1be12311], a0.this$, a1.this$, a2.this$, a3.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const ::java::lang::Throwable & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_9141164ca925417e], a0.this$, a1.this$, a2.this$, a3.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_getName(t_System$Logger *self);
    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg);
    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args);
    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data);
    static PyGetSetDef t_System$Logger__fields_[] = {
      DECLARE_GET_FIELD(t_System$Logger, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System$Logger__methods_[] = {
      DECLARE_METHOD(t_System$Logger, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, getName, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger, isLoggable, METH_O),
      DECLARE_METHOD(t_System$Logger, log, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System$Logger)[] = {
      { Py_tp_methods, t_System$Logger__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System$Logger__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System$Logger)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System$Logger, t_System$Logger, System$Logger);

    void t_System$Logger::install(PyObject *module)
    {
      installType(&PY_TYPE(System$Logger), &PY_TYPE_DEF(System$Logger), module, "System$Logger", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "Level", make_descriptor(&PY_TYPE_DEF(System$Logger$Level)));
    }

    void t_System$Logger::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "class_", make_descriptor(System$Logger::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "wrapfn_", make_descriptor(t_System$Logger::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System$Logger::initializeClass, 1)))
        return NULL;
      return t_System$Logger::wrap_Object(System$Logger(((t_System$Logger *) arg)->object.this$));
    }
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System$Logger::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System$Logger_getName(t_System$Logger *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg)
    {
      ::java::lang::System$Logger$Level a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_))
      {
        OBJ_CALL(result = self->object.isLoggable(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isLoggable", arg);
      return NULL;
    }

    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Ks", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "Ko", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);

          if (!parseArgs(args, "Ks[o", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "Ksk", ::java::lang::System$Logger$Level::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "KKk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          JArray< ::java::lang::Object > a3((jobject) NULL);

          if (!parseArgs(args, "Kks[o", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::Throwable a3((jobject) NULL);

          if (!parseArgs(args, "Kksk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "log", args);
      return NULL;
    }

    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *DoubleSummaryStatistics::class$ = NULL;
    jmethodID *DoubleSummaryStatistics::mids$ = NULL;
    bool DoubleSummaryStatistics::live$ = false;

    jclass DoubleSummaryStatistics::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/DoubleSummaryStatistics");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_257192635519977a] = env->getMethodID(cls, "<init>", "(JDDD)V");
        mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");
        mids$[mid_combine_f6ad304dbf6fe8b1] = env->getMethodID(cls, "combine", "(Ljava/util/DoubleSummaryStatistics;)V");
        mids$[mid_getAverage_9981f74b2d109da6] = env->getMethodID(cls, "getAverage", "()D");
        mids$[mid_getCount_42c72b98e3c2e08a] = env->getMethodID(cls, "getCount", "()J");
        mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
        mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
        mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DoubleSummaryStatistics::DoubleSummaryStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    DoubleSummaryStatistics::DoubleSummaryStatistics(jlong a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_257192635519977a, a0, a1, a2, a3)) {}

    void DoubleSummaryStatistics::accept(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
    }

    void DoubleSummaryStatistics::combine(const DoubleSummaryStatistics & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_combine_f6ad304dbf6fe8b1], a0.this$);
    }

    jdouble DoubleSummaryStatistics::getAverage() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAverage_9981f74b2d109da6]);
    }

    jlong DoubleSummaryStatistics::getCount() const
    {
      return env->callLongMethod(this$, mids$[mid_getCount_42c72b98e3c2e08a]);
    }

    jdouble DoubleSummaryStatistics::getMax() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
    }

    jdouble DoubleSummaryStatistics::getMin() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
    }

    jdouble DoubleSummaryStatistics::getSum() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
    }

    ::java::lang::String DoubleSummaryStatistics::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args);
    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data);
    static PyGetSetDef t_DoubleSummaryStatistics__fields_[] = {
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, average),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, count),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, max),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, min),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, sum),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DoubleSummaryStatistics__methods_[] = {
      DECLARE_METHOD(t_DoubleSummaryStatistics, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, accept, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, combine, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getAverage, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getCount, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMax, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMin, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getSum, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DoubleSummaryStatistics)[] = {
      { Py_tp_methods, t_DoubleSummaryStatistics__methods_ },
      { Py_tp_init, (void *) t_DoubleSummaryStatistics_init_ },
      { Py_tp_getset, t_DoubleSummaryStatistics__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DoubleSummaryStatistics)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DoubleSummaryStatistics, t_DoubleSummaryStatistics, DoubleSummaryStatistics);

    void t_DoubleSummaryStatistics::install(PyObject *module)
    {
      installType(&PY_TYPE(DoubleSummaryStatistics), &PY_TYPE_DEF(DoubleSummaryStatistics), module, "DoubleSummaryStatistics", 0);
    }

    void t_DoubleSummaryStatistics::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "class_", make_descriptor(DoubleSummaryStatistics::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "wrapfn_", make_descriptor(t_DoubleSummaryStatistics::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DoubleSummaryStatistics::initializeClass, 1)))
        return NULL;
      return t_DoubleSummaryStatistics::wrap_Object(DoubleSummaryStatistics(((t_DoubleSummaryStatistics *) arg)->object.this$));
    }
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DoubleSummaryStatistics::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DoubleSummaryStatistics object((jobject) NULL);

          INT_CALL(object = DoubleSummaryStatistics());
          self->object = object;
          break;
        }
       case 4:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          DoubleSummaryStatistics object((jobject) NULL);

          if (!parseArgs(args, "JDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = DoubleSummaryStatistics(a0, a1, a2, a3));
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

    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.accept(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      DoubleSummaryStatistics a0((jobject) NULL);

      if (!parseArg(arg, "k", DoubleSummaryStatistics::initializeClass, &a0))
      {
        OBJ_CALL(self->object.combine(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "combine", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getAverage());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMax());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMin());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getSum());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(DoubleSummaryStatistics), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getAverage());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMax());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMin());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getSum());
      return PyFloat_FromDouble((double) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NoSuchElementException::class$ = NULL;
    jmethodID *NoSuchElementException::mids$ = NULL;
    bool NoSuchElementException::live$ = false;

    jclass NoSuchElementException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NoSuchElementException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NoSuchElementException::NoSuchElementException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    NoSuchElementException::NoSuchElementException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NoSuchElementException__methods_[] = {
      DECLARE_METHOD(t_NoSuchElementException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NoSuchElementException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NoSuchElementException)[] = {
      { Py_tp_methods, t_NoSuchElementException__methods_ },
      { Py_tp_init, (void *) t_NoSuchElementException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NoSuchElementException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NoSuchElementException, t_NoSuchElementException, NoSuchElementException);

    void t_NoSuchElementException::install(PyObject *module)
    {
      installType(&PY_TYPE(NoSuchElementException), &PY_TYPE_DEF(NoSuchElementException), module, "NoSuchElementException", 0);
    }

    void t_NoSuchElementException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "class_", make_descriptor(NoSuchElementException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "wrapfn_", make_descriptor(t_NoSuchElementException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NoSuchElementException::initializeClass, 1)))
        return NULL;
      return t_NoSuchElementException::wrap_Object(NoSuchElementException(((t_NoSuchElementException *) arg)->object.this$));
    }
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NoSuchElementException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NoSuchElementException object((jobject) NULL);

          INT_CALL(object = NoSuchElementException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NoSuchElementException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NoSuchElementException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ConcurrentModificationException::class$ = NULL;
    jmethodID *ConcurrentModificationException::mids$ = NULL;
    bool ConcurrentModificationException::live$ = false;

    jclass ConcurrentModificationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ConcurrentModificationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ConcurrentModificationException__methods_[] = {
      DECLARE_METHOD(t_ConcurrentModificationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ConcurrentModificationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ConcurrentModificationException)[] = {
      { Py_tp_methods, t_ConcurrentModificationException__methods_ },
      { Py_tp_init, (void *) t_ConcurrentModificationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ConcurrentModificationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(ConcurrentModificationException, t_ConcurrentModificationException, ConcurrentModificationException);

    void t_ConcurrentModificationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ConcurrentModificationException), &PY_TYPE_DEF(ConcurrentModificationException), module, "ConcurrentModificationException", 0);
    }

    void t_ConcurrentModificationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "class_", make_descriptor(ConcurrentModificationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "wrapfn_", make_descriptor(t_ConcurrentModificationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ConcurrentModificationException::initializeClass, 1)))
        return NULL;
      return t_ConcurrentModificationException::wrap_Object(ConcurrentModificationException(((t_ConcurrentModificationException *) arg)->object.this$));
    }
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ConcurrentModificationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ConcurrentModificationException object((jobject) NULL);

          INT_CALL(object = ConcurrentModificationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ConcurrentModificationException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator::class$ = NULL;
    jmethodID *AttributedCharacterIterator::mids$ = NULL;
    bool AttributedCharacterIterator::live$ = false;

    jclass AttributedCharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAllAttributeKeys_6b191a9b12c1004b] = env->getMethodID(cls, "getAllAttributeKeys", "()Ljava/util/Set;");
        mids$[mid_getAttribute_009dc5eb5b86cd32] = env->getMethodID(cls, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
        mids$[mid_getAttributes_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getAttributes", "()Ljava/util/Map;");
        mids$[mid_getRunLimit_d6ab429752e7c267] = env->getMethodID(cls, "getRunLimit", "()I");
        mids$[mid_getRunLimit_cab5680f9fdd97c7] = env->getMethodID(cls, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunLimit_0835576b5c91f7a0] = env->getMethodID(cls, "getRunLimit", "(Ljava/util/Set;)I");
        mids$[mid_getRunStart_d6ab429752e7c267] = env->getMethodID(cls, "getRunStart", "()I");
        mids$[mid_getRunStart_cab5680f9fdd97c7] = env->getMethodID(cls, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunStart_0835576b5c91f7a0] = env->getMethodID(cls, "getRunStart", "(Ljava/util/Set;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set AttributedCharacterIterator::getAllAttributeKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getAllAttributeKeys_6b191a9b12c1004b]));
    }

    ::java::lang::Object AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_009dc5eb5b86cd32], a0.this$));
    }

    ::java::util::Map AttributedCharacterIterator::getAttributes() const
    {
      return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAttributes_dbcb8bbac6b35e0d]));
    }

    jint AttributedCharacterIterator::getRunLimit() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_d6ab429752e7c267]);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_cab5680f9fdd97c7], a0.this$);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_0835576b5c91f7a0], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_d6ab429752e7c267]);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_cab5680f9fdd97c7], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_0835576b5c91f7a0], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data);
    static PyGetSetDef t_AttributedCharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, allAttributeKeys),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, attributes),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runLimit),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runStart),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AttributedCharacterIterator__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAllAttributeKeys, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttribute, METH_O),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttributes, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunLimit, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunStart, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AttributedCharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator)[] = {
      &PY_TYPE_DEF(::java::text::CharacterIterator),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator, t_AttributedCharacterIterator, AttributedCharacterIterator);

    void t_AttributedCharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator), &PY_TYPE_DEF(AttributedCharacterIterator), module, "AttributedCharacterIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "Attribute", make_descriptor(&PY_TYPE_DEF(AttributedCharacterIterator$Attribute)));
    }

    void t_AttributedCharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "class_", make_descriptor(AttributedCharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "wrapfn_", make_descriptor(t_AttributedCharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator::wrap_Object(AttributedCharacterIterator(((t_AttributedCharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute));
    }

    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg)
    {
      ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.getAttribute(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getAttribute", arg);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunLimit());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunLimit", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunStart());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunStart", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunLimit());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunStart());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/SecurityException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityException::class$ = NULL;
    jmethodID *SecurityException::mids$ = NULL;
    bool SecurityException::live$ = false;

    jclass SecurityException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityException::SecurityException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SecurityException__methods_[] = {
      DECLARE_METHOD(t_SecurityException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityException)[] = {
      { Py_tp_methods, t_SecurityException__methods_ },
      { Py_tp_init, (void *) t_SecurityException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(SecurityException, t_SecurityException, SecurityException);

    void t_SecurityException::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityException), &PY_TYPE_DEF(SecurityException), module, "SecurityException", 0);
    }

    void t_SecurityException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "class_", make_descriptor(SecurityException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "wrapfn_", make_descriptor(t_SecurityException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityException::initializeClass, 1)))
        return NULL;
      return t_SecurityException::wrap_Object(SecurityException(((t_SecurityException *) arg)->object.this$));
    }
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          SecurityException object((jobject) NULL);

          INT_CALL(object = SecurityException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SecurityException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *UnsupportedOperationException::class$ = NULL;
    jmethodID *UnsupportedOperationException::mids$ = NULL;
    bool UnsupportedOperationException::live$ = false;

    jclass UnsupportedOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/UnsupportedOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_UnsupportedOperationException__methods_[] = {
      DECLARE_METHOD(t_UnsupportedOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_UnsupportedOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(UnsupportedOperationException)[] = {
      { Py_tp_methods, t_UnsupportedOperationException__methods_ },
      { Py_tp_init, (void *) t_UnsupportedOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(UnsupportedOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(UnsupportedOperationException, t_UnsupportedOperationException, UnsupportedOperationException);

    void t_UnsupportedOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(UnsupportedOperationException), &PY_TYPE_DEF(UnsupportedOperationException), module, "UnsupportedOperationException", 0);
    }

    void t_UnsupportedOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "class_", make_descriptor(UnsupportedOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "wrapfn_", make_descriptor(t_UnsupportedOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, UnsupportedOperationException::initializeClass, 1)))
        return NULL;
      return t_UnsupportedOperationException::wrap_Object(UnsupportedOperationException(((t_UnsupportedOperationException *) arg)->object.this$));
    }
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, UnsupportedOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          UnsupportedOperationException object((jobject) NULL);

          INT_CALL(object = UnsupportedOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnsupportedOperationException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Flushable::class$ = NULL;
    jmethodID *Flushable::mids$ = NULL;
    bool Flushable::live$ = false;

    jclass Flushable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Flushable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Flushable::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_flush(t_Flushable *self);

    static PyMethodDef t_Flushable__methods_[] = {
      DECLARE_METHOD(t_Flushable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, flush, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Flushable)[] = {
      { Py_tp_methods, t_Flushable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Flushable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Flushable, t_Flushable, Flushable);

    void t_Flushable::install(PyObject *module)
    {
      installType(&PY_TYPE(Flushable), &PY_TYPE_DEF(Flushable), module, "Flushable", 0);
    }

    void t_Flushable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "class_", make_descriptor(Flushable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "wrapfn_", make_descriptor(t_Flushable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Flushable::initializeClass, 1)))
        return NULL;
      return t_Flushable::wrap_Object(Flushable(((t_Flushable *) arg)->object.this$));
    }
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Flushable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Flushable_flush(t_Flushable *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/SortedSet.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *SortedSet::class$ = NULL;
    jmethodID *SortedSet::mids$ = NULL;
    bool SortedSet::live$ = false;

    jclass SortedSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/SortedSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparator_44d5f0105a5559b7] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_first_704a5bee58538972] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_headSet_703a1d412bf4e2d2] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_last_704a5bee58538972] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_2ca9cc77d5a999da] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_703a1d412bf4e2d2] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_44d5f0105a5559b7]));
    }

    ::java::lang::Object SortedSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_704a5bee58538972]));
    }

    SortedSet SortedSet::headSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_703a1d412bf4e2d2], a0.this$));
    }

    ::java::lang::Object SortedSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_704a5bee58538972]));
    }

    ::java::util::Spliterator SortedSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    SortedSet SortedSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_2ca9cc77d5a999da], a0.this$, a1.this$));
    }

    SortedSet SortedSet::tailSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_703a1d412bf4e2d2], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_comparator(t_SortedSet *self);
    static PyObject *t_SortedSet_first(t_SortedSet *self);
    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_last(t_SortedSet *self);
    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data);
    static PyGetSetDef t_SortedSet__fields_[] = {
      DECLARE_GET_FIELD(t_SortedSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SortedSet__methods_[] = {
      DECLARE_METHOD(t_SortedSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, first, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, headSet, METH_O),
      DECLARE_METHOD(t_SortedSet, last, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, tailSet, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SortedSet)[] = {
      { Py_tp_methods, t_SortedSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_SortedSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SortedSet)[] = {
      &PY_TYPE_DEF(::java::util::Set),
      NULL
    };

    DEFINE_TYPE(SortedSet, t_SortedSet, SortedSet);
    PyObject *t_SortedSet::wrap_Object(const SortedSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_SortedSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_SortedSet::install(PyObject *module)
    {
      installType(&PY_TYPE(SortedSet), &PY_TYPE_DEF(SortedSet), module, "SortedSet", 0);
    }

    void t_SortedSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "class_", make_descriptor(SortedSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "wrapfn_", make_descriptor(t_SortedSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SortedSet::initializeClass, 1)))
        return NULL;
      return t_SortedSet::wrap_Object(SortedSet(((t_SortedSet *) arg)->object.this$));
    }
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SortedSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_SortedSet_comparator(t_SortedSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_SortedSet_first(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.headSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", arg);
      return NULL;
    }

    static PyObject *t_SortedSet_last(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(SortedSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSet(a0, a1));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.tailSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", arg);
      return NULL;
    }
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Console.h"
#include "java/io/Flushable.h"
#include "java/io/Reader.h"
#include "java/io/PrintWriter.h"
#include "java/io/Console.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Console::class$ = NULL;
    jmethodID *Console::mids$ = NULL;
    bool Console::live$ = false;

    jclass Console::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Console");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_c28261cfaff181dd] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_printf_c28261cfaff181dd] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_readLine_d2c8eb4129821f0e] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLine_c9595ebc2d5f5371] = env->getMethodID(cls, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_readPassword_dc85a3bfc14a8b31] = env->getMethodID(cls, "readPassword", "()[C");
        mids$[mid_readPassword_b28b527b55e31f38] = env->getMethodID(cls, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
        mids$[mid_reader_0a92f974b39121e6] = env->getMethodID(cls, "reader", "()Ljava/io/Reader;");
        mids$[mid_writer_38e3d00017946494] = env->getMethodID(cls, "writer", "()Ljava/io/PrintWriter;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Console::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    Console Console::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_format_c28261cfaff181dd], a0.this$, a1.this$));
    }

    Console Console::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_printf_c28261cfaff181dd], a0.this$, a1.this$));
    }

    ::java::lang::String Console::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_d2c8eb4129821f0e]));
    }

    ::java::lang::String Console::readLine(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_c9595ebc2d5f5371], a0.this$, a1.this$));
    }

    JArray< jchar > Console::readPassword() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_dc85a3bfc14a8b31]));
    }

    JArray< jchar > Console::readPassword(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_b28b527b55e31f38], a0.this$, a1.this$));
    }

    ::java::io::Reader Console::reader() const
    {
      return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_reader_0a92f974b39121e6]));
    }

    ::java::io::PrintWriter Console::writer() const
    {
      return ::java::io::PrintWriter(env->callObjectMethod(this$, mids$[mid_writer_38e3d00017946494]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_flush(t_Console *self);
    static PyObject *t_Console_format(t_Console *self, PyObject *args);
    static PyObject *t_Console_printf(t_Console *self, PyObject *args);
    static PyObject *t_Console_readLine(t_Console *self, PyObject *args);
    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args);
    static PyObject *t_Console_reader(t_Console *self);
    static PyObject *t_Console_writer(t_Console *self);

    static PyMethodDef t_Console__methods_[] = {
      DECLARE_METHOD(t_Console, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, flush, METH_NOARGS),
      DECLARE_METHOD(t_Console, format, METH_VARARGS),
      DECLARE_METHOD(t_Console, printf, METH_VARARGS),
      DECLARE_METHOD(t_Console, readLine, METH_VARARGS),
      DECLARE_METHOD(t_Console, readPassword, METH_VARARGS),
      DECLARE_METHOD(t_Console, reader, METH_NOARGS),
      DECLARE_METHOD(t_Console, writer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Console)[] = {
      { Py_tp_methods, t_Console__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Console)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Console, t_Console, Console);

    void t_Console::install(PyObject *module)
    {
      installType(&PY_TYPE(Console), &PY_TYPE_DEF(Console), module, "Console", 0);
    }

    void t_Console::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "class_", make_descriptor(Console::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "wrapfn_", make_descriptor(t_Console::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Console::initializeClass, 1)))
        return NULL;
      return t_Console::wrap_Object(Console(((t_Console *) arg)->object.this$));
    }
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Console::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Console_flush(t_Console *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Console_format(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.format(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_Console_printf(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.printf(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_Console_readLine(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.readLine());
          return j2p(result);
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readLine(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readLine", args);
      return NULL;
    }

    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jchar > result((jobject) NULL);
          OBJ_CALL(result = self->object.readPassword());
          return result.wrap();
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readPassword(a0, a1));
            return result.wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readPassword", args);
      return NULL;
    }

    static PyObject *t_Console_reader(t_Console *self)
    {
      ::java::io::Reader result((jobject) NULL);
      OBJ_CALL(result = self->object.reader());
      return ::java::io::t_Reader::wrap_Object(result);
    }

    static PyObject *t_Console_writer(t_Console *self)
    {
      ::java::io::PrintWriter result((jobject) NULL);
      OBJ_CALL(result = self->object.writer());
      return ::java::io::t_PrintWriter::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Properties.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/util/Collection.h"
#include "java/io/Reader.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/io/PrintWriter.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Properties::class$ = NULL;
    jmethodID *Properties::mids$ = NULL;
    bool Properties::live$ = false;

    jclass Properties::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Properties");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_72faff9b05f5ed5e] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_72faff9b05f5ed5e] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_21566f230cac5c4a] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_ca14a13ec9c67cd5] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getProperty_95277969d373e11f] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_91d6dcf90111829e] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_21566f230cac5c4a] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_list_7a6583f48fc2663f] = env->getMethodID(cls, "list", "(Ljava/io/PrintStream;)V");
        mids$[mid_list_742cc9c22b5169e7] = env->getMethodID(cls, "list", "(Ljava/io/PrintWriter;)V");
        mids$[mid_load_8f4bef0679d2f8d5] = env->getMethodID(cls, "load", "(Ljava/io/InputStream;)V");
        mids$[mid_load_fdff785437afea93] = env->getMethodID(cls, "load", "(Ljava/io/Reader;)V");
        mids$[mid_loadFromXML_8f4bef0679d2f8d5] = env->getMethodID(cls, "loadFromXML", "(Ljava/io/InputStream;)V");
        mids$[mid_propertyNames_21566f230cac5c4a] = env->getMethodID(cls, "propertyNames", "()Ljava/util/Enumeration;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_ca14a13ec9c67cd5] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_3bf9f05b3327e056] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_ca14a13ec9c67cd5] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9bb49a94d944b361] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_save_b27d45c3effd3a77] = env->getMethodID(cls, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_setProperty_60b85247cb54000f] = env->getMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_store_b27d45c3effd3a77] = env->getMethodID(cls, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_store_c65209b838646f3a] = env->getMethodID(cls, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
        mids$[mid_storeToXML_b27d45c3effd3a77] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_storeToXML_56c938f549c63433] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_stringPropertyNames_6b191a9b12c1004b] = env->getMethodID(cls, "stringPropertyNames", "()Ljava/util/Set;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_ff7cb6c242604316] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Properties::Properties() : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Properties::Properties(jint a0) : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    void Properties::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object Properties::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean Properties::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Properties::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Properties::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Enumeration Properties::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_21566f230cac5c4a]));
    }

    ::java::util::Set Properties::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    jboolean Properties::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Properties::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object Properties::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_95277969d373e11f], a0.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_91d6dcf90111829e], a0.this$, a1.this$));
    }

    jint Properties::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Properties::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Set Properties::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    ::java::util::Enumeration Properties::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_21566f230cac5c4a]));
    }

    void Properties::list(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_7a6583f48fc2663f], a0.this$);
    }

    void Properties::list(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_742cc9c22b5169e7], a0.this$);
    }

    void Properties::load(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_8f4bef0679d2f8d5], a0.this$);
    }

    void Properties::load(const ::java::io::Reader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_fdff785437afea93], a0.this$);
    }

    void Properties::loadFromXML(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_loadFromXML_8f4bef0679d2f8d5], a0.this$);
    }

    ::java::util::Enumeration Properties::propertyNames() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_propertyNames_21566f230cac5c4a]));
    }

    ::java::lang::Object Properties::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    void Properties::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
    }

    ::java::lang::Object Properties::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::Object Properties::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jboolean Properties::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_3bf9f05b3327e056], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jboolean Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9bb49a94d944b361], a0.this$, a1.this$, a2.this$);
    }

    void Properties::save(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_save_b27d45c3effd3a77], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setProperty_60b85247cb54000f], a0.this$, a1.this$));
    }

    jint Properties::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    void Properties::store(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_b27d45c3effd3a77], a0.this$, a1.this$);
    }

    void Properties::store(const ::java::io::Writer & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_c65209b838646f3a], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_b27d45c3effd3a77], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_56c938f549c63433], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Set Properties::stringPropertyNames() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_stringPropertyNames_6b191a9b12c1004b]));
    }

    ::java::lang::String Properties::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::util::Collection Properties::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_3bfef5c77ceb081a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args);
    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_list(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_load(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg);
    static PyObject *t_Properties_propertyNames(t_Properties *self);
    static PyObject *t_Properties_put(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_save(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_size(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_store(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_stringPropertyNames(t_Properties *self);
    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_values(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get__empty(t_Properties *self, void *data);
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data);
    static PyGetSetDef t_Properties__fields_[] = {
      DECLARE_GET_FIELD(t_Properties, empty),
      DECLARE_GET_FIELD(t_Properties, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Properties__methods_[] = {
      DECLARE_METHOD(t_Properties, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, of_, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clear, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clone, METH_VARARGS),
      DECLARE_METHOD(t_Properties, contains, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_Properties, elements, METH_VARARGS),
      DECLARE_METHOD(t_Properties, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, equals, METH_VARARGS),
      DECLARE_METHOD(t_Properties, get, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Properties, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keys, METH_VARARGS),
      DECLARE_METHOD(t_Properties, list, METH_VARARGS),
      DECLARE_METHOD(t_Properties, load, METH_VARARGS),
      DECLARE_METHOD(t_Properties, loadFromXML, METH_O),
      DECLARE_METHOD(t_Properties, propertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, put, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putAll, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Properties, remove, METH_VARARGS),
      DECLARE_METHOD(t_Properties, replace, METH_VARARGS),
      DECLARE_METHOD(t_Properties, save, METH_VARARGS),
      DECLARE_METHOD(t_Properties, setProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, size, METH_VARARGS),
      DECLARE_METHOD(t_Properties, store, METH_VARARGS),
      DECLARE_METHOD(t_Properties, storeToXML, METH_VARARGS),
      DECLARE_METHOD(t_Properties, stringPropertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, toString, METH_VARARGS),
      DECLARE_METHOD(t_Properties, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Properties)[] = {
      { Py_tp_methods, t_Properties__methods_ },
      { Py_tp_init, (void *) t_Properties_init_ },
      { Py_tp_getset, t_Properties__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Properties)[] = {
      &PY_TYPE_DEF(::java::util::Hashtable),
      NULL
    };

    DEFINE_TYPE(Properties, t_Properties, Properties);
    PyObject *t_Properties::wrap_Object(const Properties& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Properties::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Properties::install(PyObject *module)
    {
      installType(&PY_TYPE(Properties), &PY_TYPE_DEF(Properties), module, "Properties", 0);
    }

    void t_Properties::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "class_", make_descriptor(Properties::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "wrapfn_", make_descriptor(t_Properties::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Properties::initializeClass, 1)))
        return NULL;
      return t_Properties::wrap_Object(Properties(((t_Properties *) arg)->object.this$));
    }
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Properties::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Properties object((jobject) NULL);

          INT_CALL(object = Properties());
          self->object = object;
          self->parameters[0] = ::java::lang::PY_TYPE(Object);
          self->parameters[1] = ::java::lang::PY_TYPE(Object);
          break;
        }
       case 1:
        {
          jint a0;
          Properties object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Properties(a0));
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Object);
            self->parameters[1] = ::java::lang::PY_TYPE(Object);
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.elements());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "elements", args, 2);
    }

    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Properties_get(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keys());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keys", args, 2);
    }

    static PyObject *t_Properties_list(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_Properties_load(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Reader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "load", args);
      return NULL;
    }

    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(self->object.loadFromXML(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "loadFromXML", arg);
      return NULL;
    }

    static PyObject *t_Properties_propertyNames(t_Properties *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.propertyNames());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Properties_put(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_Properties_save(t_Properties *self, PyObject *args)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);

      if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.save(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "save", args);
      return NULL;
    }

    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.setProperty(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_size(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Properties_store(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "store", args);
      return NULL;
    }

    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);

          if (!parseArgs(args, "kss", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "storeToXML", args);
      return NULL;
    }

    static PyObject *t_Properties_stringPropertyNames(t_Properties *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.stringPropertyNames());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Properties_values(t_Properties *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Properties_get__empty(t_Properties *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StackTraceElement::class$ = NULL;
    jmethodID *StackTraceElement::mids$ = NULL;
    bool StackTraceElement::live$ = false;

    jclass StackTraceElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StackTraceElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_65bf29bdb38d0b68] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_init$_973a3b4f82bdb570] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClassLoaderName_d2c8eb4129821f0e] = env->getMethodID(cls, "getClassLoaderName", "()Ljava/lang/String;");
        mids$[mid_getClassName_d2c8eb4129821f0e] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getFileName_d2c8eb4129821f0e] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
        mids$[mid_getLineNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLineNumber", "()I");
        mids$[mid_getMethodName_d2c8eb4129821f0e] = env->getMethodID(cls, "getMethodName", "()Ljava/lang/String;");
        mids$[mid_getModuleName_d2c8eb4129821f0e] = env->getMethodID(cls, "getModuleName", "()Ljava/lang/String;");
        mids$[mid_getModuleVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getModuleVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isNativeMethod_eee3de00fe971136] = env->getMethodID(cls, "isNativeMethod", "()Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65bf29bdb38d0b68, a0.this$, a1.this$, a2.this$, a3)) {}

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_973a3b4f82bdb570, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

    jboolean StackTraceElement::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String StackTraceElement::getClassLoaderName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassLoaderName_d2c8eb4129821f0e]));
    }

    ::java::lang::String StackTraceElement::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_d2c8eb4129821f0e]));
    }

    ::java::lang::String StackTraceElement::getFileName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_d2c8eb4129821f0e]));
    }

    jint StackTraceElement::getLineNumber() const
    {
      return env->callIntMethod(this$, mids$[mid_getLineNumber_d6ab429752e7c267]);
    }

    ::java::lang::String StackTraceElement::getMethodName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMethodName_d2c8eb4129821f0e]));
    }

    ::java::lang::String StackTraceElement::getModuleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleName_d2c8eb4129821f0e]));
    }

    ::java::lang::String StackTraceElement::getModuleVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleVersion_d2c8eb4129821f0e]));
    }

    jint StackTraceElement::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean StackTraceElement::isNativeMethod() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNativeMethod_eee3de00fe971136]);
    }

    ::java::lang::String StackTraceElement::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data);
    static PyGetSetDef t_StackTraceElement__fields_[] = {
      DECLARE_GET_FIELD(t_StackTraceElement, classLoaderName),
      DECLARE_GET_FIELD(t_StackTraceElement, className),
      DECLARE_GET_FIELD(t_StackTraceElement, fileName),
      DECLARE_GET_FIELD(t_StackTraceElement, lineNumber),
      DECLARE_GET_FIELD(t_StackTraceElement, methodName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleVersion),
      DECLARE_GET_FIELD(t_StackTraceElement, nativeMethod),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StackTraceElement__methods_[] = {
      DECLARE_METHOD(t_StackTraceElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, equals, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassLoaderName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getFileName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getLineNumber, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getMethodName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleVersion, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, isNativeMethod, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StackTraceElement)[] = {
      { Py_tp_methods, t_StackTraceElement__methods_ },
      { Py_tp_init, (void *) t_StackTraceElement_init_ },
      { Py_tp_getset, t_StackTraceElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StackTraceElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(StackTraceElement, t_StackTraceElement, StackTraceElement);

    void t_StackTraceElement::install(PyObject *module)
    {
      installType(&PY_TYPE(StackTraceElement), &PY_TYPE_DEF(StackTraceElement), module, "StackTraceElement", 0);
    }

    void t_StackTraceElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "class_", make_descriptor(StackTraceElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "wrapfn_", make_descriptor(t_StackTraceElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StackTraceElement::initializeClass, 1)))
        return NULL;
      return t_StackTraceElement::wrap_Object(StackTraceElement(((t_StackTraceElement *) arg)->object.this$));
    }
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StackTraceElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "sssI", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3));
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
          jint a6;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "ssssssI", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3, a4, a5, a6));
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

    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoaderName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFileName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getLineNumber());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMethodName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleVersion());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNativeMethod());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoaderName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFileName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getLineNumber());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMethodName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleVersion());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNativeMethod());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/TimeZone.h"
#include "java/util/Date.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/TimeZone.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TimeZone::class$ = NULL;
    jmethodID *TimeZone::mids$ = NULL;
    bool TimeZone::live$ = false;
    jint TimeZone::LONG = (jint) 0;
    jint TimeZone::SHORT = (jint) 0;

    jclass TimeZone::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TimeZone");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_getAvailableIDs_f81c0644d57ae495] = env->getStaticMethodID(cls, "getAvailableIDs", "()[Ljava/lang/String;");
        mids$[mid_getAvailableIDs_31ca0f511704e78c] = env->getStaticMethodID(cls, "getAvailableIDs", "(I)[Ljava/lang/String;");
        mids$[mid_getDSTSavings_d6ab429752e7c267] = env->getMethodID(cls, "getDSTSavings", "()I");
        mids$[mid_getDefault_7755099100e77ba2] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/TimeZone;");
        mids$[mid_getDisplayName_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_0f83359d8cbe4821] = env->getMethodID(cls, "getDisplayName", "(ZI)Ljava/lang/String;");
        mids$[mid_getDisplayName_a015903bb3bf1c24] = env->getMethodID(cls, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getID_d2c8eb4129821f0e] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
        mids$[mid_getOffset_e9d351dcffb1a696] = env->getMethodID(cls, "getOffset", "(J)I");
        mids$[mid_getOffset_45302a2248be8069] = env->getMethodID(cls, "getOffset", "(IIIIII)I");
        mids$[mid_getRawOffset_d6ab429752e7c267] = env->getMethodID(cls, "getRawOffset", "()I");
        mids$[mid_getTimeZone_29d7696d4fe6c776] = env->getStaticMethodID(cls, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
        mids$[mid_hasSameRules_c6a169791b399bc2] = env->getMethodID(cls, "hasSameRules", "(Ljava/util/TimeZone;)Z");
        mids$[mid_inDaylightTime_aa8a9ab2727cc0c7] = env->getMethodID(cls, "inDaylightTime", "(Ljava/util/Date;)Z");
        mids$[mid_observesDaylightTime_eee3de00fe971136] = env->getMethodID(cls, "observesDaylightTime", "()Z");
        mids$[mid_setDefault_f21da9779bf2bfbd] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/TimeZone;)V");
        mids$[mid_setID_105e1eadb709d9ac] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
        mids$[mid_setRawOffset_8fd427ab23829bf5] = env->getMethodID(cls, "setRawOffset", "(I)V");
        mids$[mid_useDaylightTime_eee3de00fe971136] = env->getMethodID(cls, "useDaylightTime", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        LONG = env->getStaticIntField(cls, "LONG");
        SHORT = env->getStaticIntField(cls, "SHORT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TimeZone::TimeZone() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ::java::lang::Object TimeZone::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_f81c0644d57ae495]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_31ca0f511704e78c], a0));
    }

    jint TimeZone::getDSTSavings() const
    {
      return env->callIntMethod(this$, mids$[mid_getDSTSavings_d6ab429752e7c267]);
    }

    TimeZone TimeZone::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getDefault_7755099100e77ba2]));
    }

    ::java::lang::String TimeZone::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_d2c8eb4129821f0e]));
    }

    ::java::lang::String TimeZone::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_0f83359d8cbe4821], a0, a1));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1, const ::java::util::Locale & a2) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_a015903bb3bf1c24], a0, a1, a2.this$));
    }

    ::java::lang::String TimeZone::getID() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_d2c8eb4129821f0e]));
    }

    jint TimeZone::getOffset(jlong a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_e9d351dcffb1a696], a0);
    }

    jint TimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_45302a2248be8069], a0, a1, a2, a3, a4, a5);
    }

    jint TimeZone::getRawOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getRawOffset_d6ab429752e7c267]);
    }

    TimeZone TimeZone::getTimeZone(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getTimeZone_29d7696d4fe6c776], a0.this$));
    }

    jboolean TimeZone::hasSameRules(const TimeZone & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasSameRules_c6a169791b399bc2], a0.this$);
    }

    jboolean TimeZone::inDaylightTime(const ::java::util::Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_inDaylightTime_aa8a9ab2727cc0c7], a0.this$);
    }

    jboolean TimeZone::observesDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_observesDaylightTime_eee3de00fe971136]);
    }

    void TimeZone::setDefault(const TimeZone & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_f21da9779bf2bfbd], a0.this$);
    }

    void TimeZone::setID(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setID_105e1eadb709d9ac], a0.this$);
    }

    void TimeZone::setRawOffset(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setRawOffset_8fd427ab23829bf5], a0);
    }

    jboolean TimeZone::useDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_useDaylightTime_eee3de00fe971136]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg);
    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TimeZone_clone(t_TimeZone *self);
    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args);
    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self);
    static PyObject *t_TimeZone_getDefault(PyTypeObject *type);
    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getID(t_TimeZone *self);
    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self);
    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data);
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data);
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data);
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data);
    static PyGetSetDef t_TimeZone__fields_[] = {
      DECLARE_GET_FIELD(t_TimeZone, availableIDs),
      DECLARE_GET_FIELD(t_TimeZone, dSTSavings),
      DECLARE_GETSET_FIELD(t_TimeZone, default),
      DECLARE_GET_FIELD(t_TimeZone, displayName),
      DECLARE_GETSET_FIELD(t_TimeZone, iD),
      DECLARE_GETSET_FIELD(t_TimeZone, rawOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TimeZone__methods_[] = {
      DECLARE_METHOD(t_TimeZone, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, clone, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getAvailableIDs, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDSTSavings, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getDefault, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getID, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getOffset, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getRawOffset, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getTimeZone, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, hasSameRules, METH_O),
      DECLARE_METHOD(t_TimeZone, inDaylightTime, METH_O),
      DECLARE_METHOD(t_TimeZone, observesDaylightTime, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, setDefault, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, setID, METH_O),
      DECLARE_METHOD(t_TimeZone, setRawOffset, METH_O),
      DECLARE_METHOD(t_TimeZone, useDaylightTime, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TimeZone)[] = {
      { Py_tp_methods, t_TimeZone__methods_ },
      { Py_tp_init, (void *) t_TimeZone_init_ },
      { Py_tp_getset, t_TimeZone__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TimeZone)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(TimeZone, t_TimeZone, TimeZone);

    void t_TimeZone::install(PyObject *module)
    {
      installType(&PY_TYPE(TimeZone), &PY_TYPE_DEF(TimeZone), module, "TimeZone", 0);
    }

    void t_TimeZone::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "class_", make_descriptor(TimeZone::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "wrapfn_", make_descriptor(t_TimeZone::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "boxfn_", make_descriptor(boxObject));
      env->getClass(TimeZone::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "LONG", make_descriptor(TimeZone::LONG));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "SHORT", make_descriptor(TimeZone::SHORT));
    }

    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TimeZone::initializeClass, 1)))
        return NULL;
      return t_TimeZone::wrap_Object(TimeZone(((t_TimeZone *) arg)->object.this$));
    }
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TimeZone::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds)
    {
      TimeZone object((jobject) NULL);

      INT_CALL(object = TimeZone());
      self->object = object;

      return 0;
    }

    static PyObject *t_TimeZone_clone(t_TimeZone *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          jint a0;
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError(type, "getAvailableIDs", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDSTSavings());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getDefault(PyTypeObject *type)
    {
      TimeZone result((jobject) NULL);
      OBJ_CALL(result = ::java::util::TimeZone::getDefault());
      return t_TimeZone::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jboolean a0;
          jint a1;
          ::java::util::Locale a2((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZIk", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getID(t_TimeZone *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getID());
      return j2p(result);
    }

    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          jint result;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = self->object.getOffset(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getOffset", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getRawOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      TimeZone result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::TimeZone::getTimeZone(a0));
        return t_TimeZone::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getTimeZone", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.hasSameRules(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasSameRules", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg)
    {
      ::java::util::Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::util::Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.inDaylightTime(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "inDaylightTime", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.observesDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(::java::util::TimeZone::setDefault(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setDefault", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setID(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setID", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setRawOffset(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setRawOffset", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.useDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableIDs());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDSTSavings());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data)
    {
      TimeZone value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_TimeZone::wrap_Object(value);
    }
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        TimeZone value((jobject) NULL);
        if (!parseArg(arg, "k", TimeZone::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getID());
      return j2p(value);
    }
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setID(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "iD", arg);
      return -1;
    }

    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRawOffset());
      return PyLong_FromLong((long) value);
    }
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setRawOffset(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "rawOffset", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalAccessException::class$ = NULL;
    jmethodID *IllegalAccessException::mids$ = NULL;
    bool IllegalAccessException::live$ = false;

    jclass IllegalAccessException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalAccessException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalAccessException::IllegalAccessException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    IllegalAccessException::IllegalAccessException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalAccessException__methods_[] = {
      DECLARE_METHOD(t_IllegalAccessException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalAccessException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalAccessException)[] = {
      { Py_tp_methods, t_IllegalAccessException__methods_ },
      { Py_tp_init, (void *) t_IllegalAccessException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalAccessException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(IllegalAccessException, t_IllegalAccessException, IllegalAccessException);

    void t_IllegalAccessException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalAccessException), &PY_TYPE_DEF(IllegalAccessException), module, "IllegalAccessException", 0);
    }

    void t_IllegalAccessException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "class_", make_descriptor(IllegalAccessException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "wrapfn_", make_descriptor(t_IllegalAccessException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalAccessException::initializeClass, 1)))
        return NULL;
      return t_IllegalAccessException::wrap_Object(IllegalAccessException(((t_IllegalAccessException *) arg)->object.this$));
    }
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalAccessException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalAccessException object((jobject) NULL);

          INT_CALL(object = IllegalAccessException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalAccessException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalAccessException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Cloneable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Cloneable::class$ = NULL;
    jmethodID *Cloneable::mids$ = NULL;
    bool Cloneable::live$ = false;

    jclass Cloneable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Cloneable");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Cloneable__methods_[] = {
      DECLARE_METHOD(t_Cloneable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Cloneable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Cloneable)[] = {
      { Py_tp_methods, t_Cloneable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Cloneable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Cloneable, t_Cloneable, Cloneable);

    void t_Cloneable::install(PyObject *module)
    {
      installType(&PY_TYPE(Cloneable), &PY_TYPE_DEF(Cloneable), module, "Cloneable", 0);
    }

    void t_Cloneable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "class_", make_descriptor(Cloneable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "wrapfn_", make_descriptor(t_Cloneable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Cloneable::initializeClass, 1)))
        return NULL;
      return t_Cloneable::wrap_Object(Cloneable(((t_Cloneable *) arg)->object.this$));
    }
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Cloneable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutput.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutput::class$ = NULL;
    jmethodID *ObjectOutput::mids$ = NULL;
    bool ObjectOutput::live$ = false;

    jclass ObjectOutput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeObject_83ee235bb1e64e94] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectOutput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void ObjectOutput::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void ObjectOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    void ObjectOutput::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_83ee235bb1e64e94], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args);
    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg);

    static PyMethodDef t_ObjectOutput__methods_[] = {
      DECLARE_METHOD(t_ObjectOutput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, close, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, flush, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutput, writeObject, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutput)[] = {
      { Py_tp_methods, t_ObjectOutput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutput)[] = {
      &PY_TYPE_DEF(::java::io::DataOutput),
      NULL
    };

    DEFINE_TYPE(ObjectOutput, t_ObjectOutput, ObjectOutput);

    void t_ObjectOutput::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutput), &PY_TYPE_DEF(ObjectOutput), module, "ObjectOutput", 0);
    }

    void t_ObjectOutput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "class_", make_descriptor(ObjectOutput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "wrapfn_", make_descriptor(t_ObjectOutput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutput::initializeClass, 1)))
        return NULL;
      return t_ObjectOutput::wrap_Object(ObjectOutput(((t_ObjectOutput *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
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

      return callSuper(PY_TYPE(ObjectOutput), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FilenameFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilenameFilter::class$ = NULL;
    jmethodID *FilenameFilter::mids$ = NULL;
    bool FilenameFilter::live$ = false;

    jclass FilenameFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilenameFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_6d6541b057fcbc4b] = env->getMethodID(cls, "accept", "(Ljava/io/File;Ljava/lang/String;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FilenameFilter::accept(const ::java::io::File & a0, const ::java::lang::String & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_6d6541b057fcbc4b], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args);

    static PyMethodDef t_FilenameFilter__methods_[] = {
      DECLARE_METHOD(t_FilenameFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, accept, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilenameFilter)[] = {
      { Py_tp_methods, t_FilenameFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilenameFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FilenameFilter, t_FilenameFilter, FilenameFilter);

    void t_FilenameFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FilenameFilter), &PY_TYPE_DEF(FilenameFilter), module, "FilenameFilter", 0);
    }

    void t_FilenameFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "class_", make_descriptor(FilenameFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "wrapfn_", make_descriptor(t_FilenameFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilenameFilter::initializeClass, 1)))
        return NULL;
      return t_FilenameFilter::wrap_Object(FilenameFilter(((t_FilenameFilter *) arg)->object.this$));
    }
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilenameFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args)
    {
      ::java::io::File a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.accept(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NamedPackage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NamedPackage::class$ = NULL;
    jmethodID *NamedPackage::mids$ = NULL;
    bool NamedPackage::live$ = false;

    jclass NamedPackage::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NamedPackage");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_NamedPackage__methods_[] = {
      DECLARE_METHOD(t_NamedPackage, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NamedPackage, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NamedPackage)[] = {
      { Py_tp_methods, t_NamedPackage__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NamedPackage)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(NamedPackage, t_NamedPackage, NamedPackage);

    void t_NamedPackage::install(PyObject *module)
    {
      installType(&PY_TYPE(NamedPackage), &PY_TYPE_DEF(NamedPackage), module, "NamedPackage", 0);
    }

    void t_NamedPackage::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "class_", make_descriptor(NamedPackage::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "wrapfn_", make_descriptor(t_NamedPackage::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NamedPackage::initializeClass, 1)))
        return NULL;
      return t_NamedPackage::wrap_Object(NamedPackage(((t_NamedPackage *) arg)->object.this$));
    }
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NamedPackage::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Dictionary.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Dictionary::class$ = NULL;
    jmethodID *Dictionary::mids$ = NULL;
    bool Dictionary::live$ = false;

    jclass Dictionary::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Dictionary");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_elements_21566f230cac5c4a] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keys_21566f230cac5c4a] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Dictionary::Dictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ::java::util::Enumeration Dictionary::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_21566f230cac5c4a]));
    }

    ::java::lang::Object Dictionary::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    jboolean Dictionary::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Enumeration Dictionary::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_21566f230cac5c4a]));
    }

    ::java::lang::Object Dictionary::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::Object Dictionary::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jint Dictionary::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args);
    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Dictionary_elements(t_Dictionary *self);
    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self);
    static PyObject *t_Dictionary_keys(t_Dictionary *self);
    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args);
    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_size(t_Dictionary *self);
    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data);
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data);
    static PyGetSetDef t_Dictionary__fields_[] = {
      DECLARE_GET_FIELD(t_Dictionary, empty),
      DECLARE_GET_FIELD(t_Dictionary, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Dictionary__methods_[] = {
      DECLARE_METHOD(t_Dictionary, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, of_, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, elements, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, get, METH_O),
      DECLARE_METHOD(t_Dictionary, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, keys, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, put, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, remove, METH_O),
      DECLARE_METHOD(t_Dictionary, size, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Dictionary)[] = {
      { Py_tp_methods, t_Dictionary__methods_ },
      { Py_tp_init, (void *) t_Dictionary_init_ },
      { Py_tp_getset, t_Dictionary__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Dictionary)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Dictionary, t_Dictionary, Dictionary);
    PyObject *t_Dictionary::wrap_Object(const Dictionary& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Dictionary::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Dictionary::install(PyObject *module)
    {
      installType(&PY_TYPE(Dictionary), &PY_TYPE_DEF(Dictionary), module, "Dictionary", 0);
    }

    void t_Dictionary::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "class_", make_descriptor(Dictionary::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "wrapfn_", make_descriptor(t_Dictionary::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Dictionary::initializeClass, 1)))
        return NULL;
      return t_Dictionary::wrap_Object(Dictionary(((t_Dictionary *) arg)->object.this$));
    }
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Dictionary::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds)
    {
      Dictionary object((jobject) NULL);

      INT_CALL(object = Dictionary());
      self->object = object;

      return 0;
    }

    static PyObject *t_Dictionary_elements(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.elements());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[1]);
    }

    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Dictionary_keys(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.keys());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Dictionary_size(t_Dictionary *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NumberFormatException::class$ = NULL;
    jmethodID *NumberFormatException::mids$ = NULL;
    bool NumberFormatException::live$ = false;

    jclass NumberFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NumberFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NumberFormatException::NumberFormatException() : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    NumberFormatException::NumberFormatException(const ::java::lang::String & a0) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NumberFormatException__methods_[] = {
      DECLARE_METHOD(t_NumberFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormatException)[] = {
      { Py_tp_methods, t_NumberFormatException__methods_ },
      { Py_tp_init, (void *) t_NumberFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormatException)[] = {
      &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
      NULL
    };

    DEFINE_TYPE(NumberFormatException, t_NumberFormatException, NumberFormatException);

    void t_NumberFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormatException), &PY_TYPE_DEF(NumberFormatException), module, "NumberFormatException", 0);
    }

    void t_NumberFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "class_", make_descriptor(NumberFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "wrapfn_", make_descriptor(t_NumberFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormatException::initializeClass, 1)))
        return NULL;
      return t_NumberFormatException::wrap_Object(NumberFormatException(((t_NumberFormatException *) arg)->object.this$));
    }
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormatException object((jobject) NULL);

          INT_CALL(object = NumberFormatException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NumberFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NumberFormatException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Serializable::class$ = NULL;
    jmethodID *Serializable::mids$ = NULL;
    bool Serializable::live$ = false;

    jclass Serializable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Serializable");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Serializable__methods_[] = {
      DECLARE_METHOD(t_Serializable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Serializable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Serializable)[] = {
      { Py_tp_methods, t_Serializable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Serializable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Serializable, t_Serializable, Serializable);

    void t_Serializable::install(PyObject *module)
    {
      installType(&PY_TYPE(Serializable), &PY_TYPE_DEF(Serializable), module, "Serializable", 0);
    }

    void t_Serializable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "class_", make_descriptor(Serializable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "wrapfn_", make_descriptor(t_Serializable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Serializable::initializeClass, 1)))
        return NULL;
      return t_Serializable::wrap_Object(Serializable(((t_Serializable *) arg)->object.this$));
    }
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Serializable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Class.h"
#include "java/lang/Exception.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *AutoCloseable::class$ = NULL;
    jmethodID *AutoCloseable::mids$ = NULL;
    bool AutoCloseable::live$ = false;

    jclass AutoCloseable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/AutoCloseable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AutoCloseable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self);

    static PyMethodDef t_AutoCloseable__methods_[] = {
      DECLARE_METHOD(t_AutoCloseable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, close, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AutoCloseable)[] = {
      { Py_tp_methods, t_AutoCloseable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AutoCloseable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AutoCloseable, t_AutoCloseable, AutoCloseable);

    void t_AutoCloseable::install(PyObject *module)
    {
      installType(&PY_TYPE(AutoCloseable), &PY_TYPE_DEF(AutoCloseable), module, "AutoCloseable", 0);
    }

    void t_AutoCloseable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "class_", make_descriptor(AutoCloseable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "wrapfn_", make_descriptor(t_AutoCloseable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AutoCloseable::initializeClass, 1)))
        return NULL;
      return t_AutoCloseable::wrap_Object(AutoCloseable(((t_AutoCloseable *) arg)->object.this$));
    }
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AutoCloseable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileFilter.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileFilter::class$ = NULL;
    jmethodID *FileFilter::mids$ = NULL;
    bool FileFilter::live$ = false;

    jclass FileFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_f268557c9bda463f] = env->getMethodID(cls, "accept", "(Ljava/io/File;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FileFilter::accept(const ::java::io::File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_f268557c9bda463f], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg);

    static PyMethodDef t_FileFilter__methods_[] = {
      DECLARE_METHOD(t_FileFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, accept, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileFilter)[] = {
      { Py_tp_methods, t_FileFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileFilter, t_FileFilter, FileFilter);

    void t_FileFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FileFilter), &PY_TYPE_DEF(FileFilter), module, "FileFilter", 0);
    }

    void t_FileFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "class_", make_descriptor(FileFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "wrapfn_", make_descriptor(t_FileFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileFilter::initializeClass, 1)))
        return NULL;
      return t_FileFilter::wrap_Object(FileFilter(((t_FileFilter *) arg)->object.this$));
    }
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg)
    {
      ::java::io::File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.accept(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *UnsupportedEncodingException::class$ = NULL;
    jmethodID *UnsupportedEncodingException::mids$ = NULL;
    bool UnsupportedEncodingException::live$ = false;

    jclass UnsupportedEncodingException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/UnsupportedEncodingException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedEncodingException::UnsupportedEncodingException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_UnsupportedEncodingException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_UnsupportedEncodingException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_UnsupportedEncodingException_init_(t_UnsupportedEncodingException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_UnsupportedEncodingException__methods_[] = {
      DECLARE_METHOD(t_UnsupportedEncodingException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_UnsupportedEncodingException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(UnsupportedEncodingException)[] = {
      { Py_tp_methods, t_UnsupportedEncodingException__methods_ },
      { Py_tp_init, (void *) t_UnsupportedEncodingException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(UnsupportedEncodingException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(UnsupportedEncodingException, t_UnsupportedEncodingException, UnsupportedEncodingException);

    void t_UnsupportedEncodingException::install(PyObject *module)
    {
      installType(&PY_TYPE(UnsupportedEncodingException), &PY_TYPE_DEF(UnsupportedEncodingException), module, "UnsupportedEncodingException", 0);
    }

    void t_UnsupportedEncodingException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "class_", make_descriptor(UnsupportedEncodingException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "wrapfn_", make_descriptor(t_UnsupportedEncodingException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_UnsupportedEncodingException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, UnsupportedEncodingException::initializeClass, 1)))
        return NULL;
      return t_UnsupportedEncodingException::wrap_Object(UnsupportedEncodingException(((t_UnsupportedEncodingException *) arg)->object.this$));
    }
    static PyObject *t_UnsupportedEncodingException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, UnsupportedEncodingException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_UnsupportedEncodingException_init_(t_UnsupportedEncodingException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          UnsupportedEncodingException object((jobject) NULL);

          INT_CALL(object = UnsupportedEncodingException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          UnsupportedEncodingException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = UnsupportedEncodingException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/NotActiveException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *NotActiveException::class$ = NULL;
    jmethodID *NotActiveException::mids$ = NULL;
    bool NotActiveException::live$ = false;

    jclass NotActiveException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/NotActiveException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NotActiveException::NotActiveException() : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    NotActiveException::NotActiveException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NotActiveException__methods_[] = {
      DECLARE_METHOD(t_NotActiveException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NotActiveException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NotActiveException)[] = {
      { Py_tp_methods, t_NotActiveException__methods_ },
      { Py_tp_init, (void *) t_NotActiveException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NotActiveException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(NotActiveException, t_NotActiveException, NotActiveException);

    void t_NotActiveException::install(PyObject *module)
    {
      installType(&PY_TYPE(NotActiveException), &PY_TYPE_DEF(NotActiveException), module, "NotActiveException", 0);
    }

    void t_NotActiveException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "class_", make_descriptor(NotActiveException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "wrapfn_", make_descriptor(t_NotActiveException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NotActiveException::initializeClass, 1)))
        return NULL;
      return t_NotActiveException::wrap_Object(NotActiveException(((t_NotActiveException *) arg)->object.this$));
    }
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NotActiveException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NotActiveException object((jobject) NULL);

          INT_CALL(object = NotActiveException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NotActiveException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NotActiveException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectOutput.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream$PutField::class$ = NULL;
    jmethodID *ObjectOutputStream$PutField::mids$ = NULL;
    bool ObjectOutputStream$PutField::live$ = false;

    jclass ObjectOutputStream$PutField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream$PutField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_put_c5d48f261709aa3e] = env->getMethodID(cls, "put", "(Ljava/lang/String;Z)V");
        mids$[mid_put_4e8636a267c9c4c5] = env->getMethodID(cls, "put", "(Ljava/lang/String;B)V");
        mids$[mid_put_67ec27f36e12d83b] = env->getMethodID(cls, "put", "(Ljava/lang/String;C)V");
        mids$[mid_put_4a1c1c41794e71b1] = env->getMethodID(cls, "put", "(Ljava/lang/String;D)V");
        mids$[mid_put_93df5508dbbcb1df] = env->getMethodID(cls, "put", "(Ljava/lang/String;F)V");
        mids$[mid_put_409747bddf859341] = env->getMethodID(cls, "put", "(Ljava/lang/String;I)V");
        mids$[mid_put_8d1699d8ffa3b892] = env->getMethodID(cls, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_put_9eb977100dbabed8] = env->getMethodID(cls, "put", "(Ljava/lang/String;J)V");
        mids$[mid_put_5fd371a8d3f6eeac] = env->getMethodID(cls, "put", "(Ljava/lang/String;S)V");
        mids$[mid_write_7449e564e5e09d65] = env->getMethodID(cls, "write", "(Ljava/io/ObjectOutput;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream$PutField::ObjectOutputStream$PutField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_c5d48f261709aa3e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jbyte a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_4e8636a267c9c4c5], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_67ec27f36e12d83b], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jdouble a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_4a1c1c41794e71b1], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jfloat a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_93df5508dbbcb1df], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_409747bddf859341], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_8d1699d8ffa3b892], a0.this$, a1.this$);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jlong a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_9eb977100dbabed8], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jshort a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_5fd371a8d3f6eeac], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::write(const ::java::io::ObjectOutput & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_7449e564e5e09d65], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args);
    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream$PutField__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream$PutField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, put, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, write, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream$PutField)[] = {
      { Py_tp_methods, t_ObjectOutputStream$PutField__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream$PutField_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream$PutField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream$PutField, t_ObjectOutputStream$PutField, ObjectOutputStream$PutField);

    void t_ObjectOutputStream$PutField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream$PutField), &PY_TYPE_DEF(ObjectOutputStream$PutField), module, "ObjectOutputStream$PutField", 0);
    }

    void t_ObjectOutputStream$PutField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "class_", make_descriptor(ObjectOutputStream$PutField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "wrapfn_", make_descriptor(t_ObjectOutputStream$PutField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream$PutField::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream$PutField::wrap_Object(ObjectOutputStream$PutField(((t_ObjectOutputStream$PutField *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream$PutField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds)
    {
      ObjectOutputStream$PutField object((jobject) NULL);

      INT_CALL(object = ObjectOutputStream$PutField());
      self->object = object;

      return 0;
    }

    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "sB", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "sC", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "sF", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "sS", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg)
    {
      ::java::io::ObjectOutput a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectOutput::initializeClass, &a0))
      {
        OBJ_CALL(self->object.write(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "write", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/NavigableSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableSet::class$ = NULL;
    jmethodID *NavigableSet::mids$ = NULL;
    bool NavigableSet::live$ = false;

    jclass NavigableSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceiling_05290476c26136d7] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_915193d823a938b2] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_floor_05290476c26136d7] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_703a1d412bf4e2d2] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_bdde78447932d510] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_05290476c26136d7] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lower_05290476c26136d7] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_704a5bee58538972] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_704a5bee58538972] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_subSet_2ca9cc77d5a999da] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_76f09fa229f62b71] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_703a1d412bf4e2d2] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_bdde78447932d510] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NavigableSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_05290476c26136d7], a0.this$));
    }

    ::java::util::Iterator NavigableSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4f613ccd2f803b4b]));
    }

    NavigableSet NavigableSet::descendingSet() const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_915193d823a938b2]));
    }

    ::java::lang::Object NavigableSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_05290476c26136d7], a0.this$));
    }

    ::java::util::SortedSet NavigableSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_703a1d412bf4e2d2], a0.this$));
    }

    NavigableSet NavigableSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_bdde78447932d510], a0.this$, a1));
    }

    ::java::lang::Object NavigableSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_05290476c26136d7], a0.this$));
    }

    ::java::util::Iterator NavigableSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    ::java::lang::Object NavigableSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object NavigableSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_704a5bee58538972]));
    }

    ::java::lang::Object NavigableSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_704a5bee58538972]));
    }

    ::java::util::SortedSet NavigableSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_2ca9cc77d5a999da], a0.this$, a1.this$));
    }

    NavigableSet NavigableSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_76f09fa229f62b71], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet NavigableSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_703a1d412bf4e2d2], a0.this$));
    }

    NavigableSet NavigableSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_bdde78447932d510], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self);
    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self);
    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self);
    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self);
    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data);
    static PyGetSetDef t_NavigableSet__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableSet__methods_[] = {
      DECLARE_METHOD(t_NavigableSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, ceiling, METH_O),
      DECLARE_METHOD(t_NavigableSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, floor, METH_O),
      DECLARE_METHOD(t_NavigableSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, higher, METH_O),
      DECLARE_METHOD(t_NavigableSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, lower, METH_O),
      DECLARE_METHOD(t_NavigableSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableSet)[] = {
      { Py_tp_methods, t_NavigableSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_NavigableSet *)) get_generic_iterator< t_NavigableSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableSet)[] = {
      &PY_TYPE_DEF(::java::util::SortedSet),
      NULL
    };

    DEFINE_TYPE(NavigableSet, t_NavigableSet, NavigableSet);
    PyObject *t_NavigableSet::wrap_Object(const NavigableSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_NavigableSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_NavigableSet::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableSet), &PY_TYPE_DEF(NavigableSet), module, "NavigableSet", 0);
    }

    void t_NavigableSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "class_", make_descriptor(NavigableSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "wrapfn_", make_descriptor(t_NavigableSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableSet::initializeClass, 1)))
        return NULL;
      return t_NavigableSet::wrap_Object(NavigableSet(((t_NavigableSet *) arg)->object.this$));
    }
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self)
    {
      NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "headSet", args, 2);
    }

    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "subSet", args, 2);
    }

    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "tailSet", args, 2);
    }
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileNotFoundException::class$ = NULL;
    jmethodID *FileNotFoundException::mids$ = NULL;
    bool FileNotFoundException::live$ = false;

    jclass FileNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileNotFoundException::FileNotFoundException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    FileNotFoundException::FileNotFoundException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_FileNotFoundException__methods_[] = {
      DECLARE_METHOD(t_FileNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileNotFoundException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileNotFoundException)[] = {
      { Py_tp_methods, t_FileNotFoundException__methods_ },
      { Py_tp_init, (void *) t_FileNotFoundException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileNotFoundException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(FileNotFoundException, t_FileNotFoundException, FileNotFoundException);

    void t_FileNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(FileNotFoundException), &PY_TYPE_DEF(FileNotFoundException), module, "FileNotFoundException", 0);
    }

    void t_FileNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "class_", make_descriptor(FileNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "wrapfn_", make_descriptor(t_FileNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileNotFoundException::initializeClass, 1)))
        return NULL;
      return t_FileNotFoundException::wrap_Object(FileNotFoundException(((t_FileNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          FileNotFoundException object((jobject) NULL);

          INT_CALL(object = FileNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          FileNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileNotFoundException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Thread.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ThreadGroup.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityManager::class$ = NULL;
    jmethodID *SecurityManager::mids$ = NULL;
    bool SecurityManager::live$ = false;

    jclass SecurityManager::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityManager");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_checkAccept_409747bddf859341] = env->getMethodID(cls, "checkAccept", "(Ljava/lang/String;I)V");
        mids$[mid_checkAccess_64babdd34ce90f76] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/Thread;)V");
        mids$[mid_checkAccess_86cc064cb2f6d47d] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
        mids$[mid_checkConnect_409747bddf859341] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;I)V");
        mids$[mid_checkConnect_fa2c8b3802d928db] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
        mids$[mid_checkCreateClassLoader_ff7cb6c242604316] = env->getMethodID(cls, "checkCreateClassLoader", "()V");
        mids$[mid_checkDelete_105e1eadb709d9ac] = env->getMethodID(cls, "checkDelete", "(Ljava/lang/String;)V");
        mids$[mid_checkExec_105e1eadb709d9ac] = env->getMethodID(cls, "checkExec", "(Ljava/lang/String;)V");
        mids$[mid_checkExit_8fd427ab23829bf5] = env->getMethodID(cls, "checkExit", "(I)V");
        mids$[mid_checkLink_105e1eadb709d9ac] = env->getMethodID(cls, "checkLink", "(Ljava/lang/String;)V");
        mids$[mid_checkListen_8fd427ab23829bf5] = env->getMethodID(cls, "checkListen", "(I)V");
        mids$[mid_checkPackageAccess_105e1eadb709d9ac] = env->getMethodID(cls, "checkPackageAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkPackageDefinition_105e1eadb709d9ac] = env->getMethodID(cls, "checkPackageDefinition", "(Ljava/lang/String;)V");
        mids$[mid_checkPrintJobAccess_ff7cb6c242604316] = env->getMethodID(cls, "checkPrintJobAccess", "()V");
        mids$[mid_checkPropertiesAccess_ff7cb6c242604316] = env->getMethodID(cls, "checkPropertiesAccess", "()V");
        mids$[mid_checkPropertyAccess_105e1eadb709d9ac] = env->getMethodID(cls, "checkPropertyAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_2abbf5ab4dcb8447] = env->getMethodID(cls, "checkRead", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkRead_105e1eadb709d9ac] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_8d1699d8ffa3b892] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_checkSecurityAccess_105e1eadb709d9ac] = env->getMethodID(cls, "checkSecurityAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkSetFactory_ff7cb6c242604316] = env->getMethodID(cls, "checkSetFactory", "()V");
        mids$[mid_checkWrite_2abbf5ab4dcb8447] = env->getMethodID(cls, "checkWrite", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkWrite_105e1eadb709d9ac] = env->getMethodID(cls, "checkWrite", "(Ljava/lang/String;)V");
        mids$[mid_getSecurityContext_704a5bee58538972] = env->getMethodID(cls, "getSecurityContext", "()Ljava/lang/Object;");
        mids$[mid_getThreadGroup_7b80b98e8a66c9f8] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getClassContext_43ba7a5d6b18fc61] = env->getMethodID(cls, "getClassContext", "()[Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityManager::SecurityManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    void SecurityManager::checkAccept(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccept_409747bddf859341], a0.this$, a1);
    }

    void SecurityManager::checkAccess(const ::java::lang::Thread & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_64babdd34ce90f76], a0.this$);
    }

    void SecurityManager::checkAccess(const ::java::lang::ThreadGroup & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_86cc064cb2f6d47d], a0.this$);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_409747bddf859341], a0.this$, a1);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1, const ::java::lang::Object & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_fa2c8b3802d928db], a0.this$, a1, a2.this$);
    }

    void SecurityManager::checkCreateClassLoader() const
    {
      env->callVoidMethod(this$, mids$[mid_checkCreateClassLoader_ff7cb6c242604316]);
    }

    void SecurityManager::checkDelete(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkDelete_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkExec(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExec_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkExit(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExit_8fd427ab23829bf5], a0);
    }

    void SecurityManager::checkLink(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkLink_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkListen(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkListen_8fd427ab23829bf5], a0);
    }

    void SecurityManager::checkPackageAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageAccess_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkPackageDefinition(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageDefinition_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkPrintJobAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPrintJobAccess_ff7cb6c242604316]);
    }

    void SecurityManager::checkPropertiesAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertiesAccess_ff7cb6c242604316]);
    }

    void SecurityManager::checkPropertyAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertyAccess_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_2abbf5ab4dcb8447], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_8d1699d8ffa3b892], a0.this$, a1.this$);
    }

    void SecurityManager::checkSecurityAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkSecurityAccess_105e1eadb709d9ac], a0.this$);
    }

    void SecurityManager::checkSetFactory() const
    {
      env->callVoidMethod(this$, mids$[mid_checkSetFactory_ff7cb6c242604316]);
    }

    void SecurityManager::checkWrite(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_2abbf5ab4dcb8447], a0.this$);
    }

    void SecurityManager::checkWrite(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_105e1eadb709d9ac], a0.this$);
    }

    ::java::lang::Object SecurityManager::getSecurityContext() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecurityContext_704a5bee58538972]));
    }

    ::java::lang::ThreadGroup SecurityManager::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_7b80b98e8a66c9f8]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds);
    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self);
    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self);
    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data);
    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data);
    static PyGetSetDef t_SecurityManager__fields_[] = {
      DECLARE_GET_FIELD(t_SecurityManager, securityContext),
      DECLARE_GET_FIELD(t_SecurityManager, threadGroup),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SecurityManager__methods_[] = {
      DECLARE_METHOD(t_SecurityManager, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, checkAccept, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkAccess, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkConnect, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkCreateClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkDelete, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExec, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExit, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkLink, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkListen, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageDefinition, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPrintJobAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertiesAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertyAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkRead, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkSecurityAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkSetFactory, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkWrite, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, getSecurityContext, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, getThreadGroup, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityManager)[] = {
      { Py_tp_methods, t_SecurityManager__methods_ },
      { Py_tp_init, (void *) t_SecurityManager_init_ },
      { Py_tp_getset, t_SecurityManager__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityManager)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(SecurityManager, t_SecurityManager, SecurityManager);

    void t_SecurityManager::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityManager), &PY_TYPE_DEF(SecurityManager), module, "SecurityManager", 0);
    }

    void t_SecurityManager::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "class_", make_descriptor(SecurityManager::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "wrapfn_", make_descriptor(t_SecurityManager::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityManager::initializeClass, 1)))
        return NULL;
      return t_SecurityManager::wrap_Object(SecurityManager(((t_SecurityManager *) arg)->object.this$));
    }
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityManager::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds)
    {
      SecurityManager object((jobject) NULL);

      INT_CALL(object = SecurityManager());
      self->object = object;

      return 0;
    }

    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        OBJ_CALL(self->object.checkAccept(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccept", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Thread a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Thread::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ThreadGroup::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccess", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          ::java::lang::Object a2((jobject) NULL);

          if (!parseArgs(args, "sIo", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkConnect", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkCreateClassLoader());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkDelete(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkDelete", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkExec(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExec", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkExit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExit", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkLink(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkLink", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkListen(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkListen", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageDefinition(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageDefinition", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPrintJobAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPropertiesAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPropertyAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPropertyAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.checkRead(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkRead", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkSecurityAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkSecurityAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkSetFactory());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkWrite", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self)
    {
      ::java::lang::ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data)
    {
      ::java::lang::ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(value);
    }
  }
}
