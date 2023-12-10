#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FiniteDifferencePropagatorConverter::class$ = NULL;
        jmethodID *FiniteDifferencePropagatorConverter::mids$ = NULL;
        bool FiniteDifferencePropagatorConverter::live$ = false;

        jclass FiniteDifferencePropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_682853cb9e463f06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_getObjectiveFunction_aaef55ff59f9c00e] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b196da25fd980476] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencePropagatorConverter::FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_682853cb9e463f06, a0.this$, a1, a2)) {}
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
      namespace conversion {
        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_FiniteDifferencePropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencePropagatorConverter)[] = {
          { Py_tp_methods, t_FiniteDifferencePropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencePropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencePropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencePropagatorConverter, t_FiniteDifferencePropagatorConverter, FiniteDifferencePropagatorConverter);

        void t_FiniteDifferencePropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencePropagatorConverter), &PY_TYPE_DEF(FiniteDifferencePropagatorConverter), module, "FiniteDifferencePropagatorConverter", 0);
        }

        void t_FiniteDifferencePropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "class_", make_descriptor(FiniteDifferencePropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "wrapfn_", make_descriptor(t_FiniteDifferencePropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencePropagatorConverter::wrap_Object(FiniteDifferencePropagatorConverter(((t_FiniteDifferencePropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          FiniteDifferencePropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FiniteDifferencePropagatorConverter(a0, a1, a2));
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
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseAmbiguityModifier::class$ = NULL;
          jmethodID *PhaseAmbiguityModifier::mids$ = NULL;
          bool PhaseAmbiguityModifier::live$ = false;

          jclass PhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseAmbiguityModifier::PhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

          ::java::util::List PhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void PhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void PhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self);
          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_PhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_PhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_PhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(PhaseAmbiguityModifier, t_PhaseAmbiguityModifier, PhaseAmbiguityModifier);

          void t_PhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseAmbiguityModifier), &PY_TYPE_DEF(PhaseAmbiguityModifier), module, "PhaseAmbiguityModifier", 0);
          }

          void t_PhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "class_", make_descriptor(PhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_PhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseAmbiguityModifier::wrap_Object(PhaseAmbiguityModifier(((t_PhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            PhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = PhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data)
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
#include "java/io/PrintWriter.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintWriter.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintWriter::class$ = NULL;
    jmethodID *PrintWriter::mids$ = NULL;
    bool PrintWriter::live$ = false;

    jclass PrintWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_255f64cf1272816f] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_645294b7123ff437] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;)V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94be9c6310e15013] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_50d10d496ad84231] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_411e711b28768b62] = env->getMethodID(cls, "<init>", "(Ljava/io/Writer;Z)V");
        mids$[mid_append_004a5bd76bea8481] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintWriter;");
        mids$[mid_append_38d9518804582ecd] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;");
        mids$[mid_append_a56e4dafa3445fa2] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;");
        mids$[mid_checkError_e470b6d9e0d979db] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_b6f08f464ed76c3b] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_format_3f2e19a6dabe53ae] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_print_819ed274952f967e] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_e939c6558ae8d313] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_50a2e0b139e80a58] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_be0046d7f7239695] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_77e0f9a1f260e2e5] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_ca234f4580d28ea3] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_0a2a1ac2721c0336] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_7ca0d9438822cb0b] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_fefb08975c10f0a1] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_b6f08f464ed76c3b] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_printf_3f2e19a6dabe53ae] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;");
        mids$[mid_println_7ae3461a92a43152] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_819ed274952f967e] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_e939c6558ae8d313] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_50a2e0b139e80a58] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_be0046d7f7239695] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_77e0f9a1f260e2e5] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_ca234f4580d28ea3] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_0a2a1ac2721c0336] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_7ca0d9438822cb0b] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_fefb08975c10f0a1] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_819ed274952f967e] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_e939c6558ae8d313] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_2df38be22737223f] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_10ca79ad48bfee14] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");
        mids$[mid_setError_7ae3461a92a43152] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_7ae3461a92a43152] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintWriter::PrintWriter(const ::java::io::File & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_255f64cf1272816f, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_645294b7123ff437, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_94be9c6310e15013, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

    PrintWriter::PrintWriter(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_50d10d496ad84231, a0.this$, a1)) {}

    PrintWriter::PrintWriter(const ::java::io::Writer & a0, jboolean a1) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_411e711b28768b62, a0.this$, a1)) {}

    PrintWriter PrintWriter::append(jchar a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_004a5bd76bea8481], a0));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_38d9518804582ecd], a0.this$));
    }

    PrintWriter PrintWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_append_a56e4dafa3445fa2], a0.this$, a1, a2));
    }

    jboolean PrintWriter::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_e470b6d9e0d979db]);
    }

    void PrintWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void PrintWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    PrintWriter PrintWriter::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_b6f08f464ed76c3b], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_format_3f2e19a6dabe53ae], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_819ed274952f967e], a0.this$);
    }

    void PrintWriter::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e939c6558ae8d313], a0.this$);
    }

    void PrintWriter::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_50a2e0b139e80a58], a0);
    }

    void PrintWriter::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_be0046d7f7239695], a0);
    }

    void PrintWriter::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_77e0f9a1f260e2e5], a0);
    }

    void PrintWriter::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_ca234f4580d28ea3], a0);
    }

    void PrintWriter::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_0a2a1ac2721c0336], a0);
    }

    void PrintWriter::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_7ca0d9438822cb0b], a0.this$);
    }

    void PrintWriter::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_fefb08975c10f0a1], a0);
    }

    PrintWriter PrintWriter::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_b6f08f464ed76c3b], a0.this$, a1.this$));
    }

    PrintWriter PrintWriter::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintWriter(env->callObjectMethod(this$, mids$[mid_printf_3f2e19a6dabe53ae], a0.this$, a1.this$, a2.this$));
    }

    void PrintWriter::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_7ae3461a92a43152]);
    }

    void PrintWriter::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_819ed274952f967e], a0.this$);
    }

    void PrintWriter::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e939c6558ae8d313], a0.this$);
    }

    void PrintWriter::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_50a2e0b139e80a58], a0);
    }

    void PrintWriter::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_be0046d7f7239695], a0);
    }

    void PrintWriter::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_77e0f9a1f260e2e5], a0);
    }

    void PrintWriter::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_ca234f4580d28ea3], a0);
    }

    void PrintWriter::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_0a2a1ac2721c0336], a0);
    }

    void PrintWriter::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_7ca0d9438822cb0b], a0.this$);
    }

    void PrintWriter::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_fefb08975c10f0a1], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_819ed274952f967e], a0.this$);
    }

    void PrintWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e939c6558ae8d313], a0.this$);
    }

    void PrintWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void PrintWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_2df38be22737223f], a0.this$, a1, a2);
    }

    void PrintWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_10ca79ad48bfee14], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self);
    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args);
    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args);

    static PyMethodDef t_PrintWriter__methods_[] = {
      DECLARE_METHOD(t_PrintWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintWriter)[] = {
      { Py_tp_methods, t_PrintWriter__methods_ },
      { Py_tp_init, (void *) t_PrintWriter_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(PrintWriter, t_PrintWriter, PrintWriter);

    void t_PrintWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintWriter), &PY_TYPE_DEF(PrintWriter), module, "PrintWriter", 0);
    }

    void t_PrintWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "class_", make_descriptor(PrintWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "wrapfn_", make_descriptor(t_PrintWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintWriter::initializeClass, 1)))
        return NULL;
      return t_PrintWriter::wrap_Object(PrintWriter(((t_PrintWriter *) arg)->object.this$));
    }
    static PyObject *t_PrintWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintWriter_init_(t_PrintWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Writer::initializeClass, &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintWriter(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          jboolean a1;
          PrintWriter object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintWriter(a0, a1));
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

    static PyObject *t_PrintWriter_append(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_PrintWriter_checkError(t_PrintWriter *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintWriter_close(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintWriter_flush(t_PrintWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintWriter_format(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_print(t_PrintWriter *self, PyObject *args)
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

    static PyObject *t_PrintWriter_printf(t_PrintWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintWriter result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintWriter::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintWriter_println(t_PrintWriter *self, PyObject *args)
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

    static PyObject *t_PrintWriter_write(t_PrintWriter *self, PyObject *args)
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

      return callSuper(PY_TYPE(PrintWriter), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_parse_2152864a37772c07] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;Z)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_getMessageType_4283240abc98cbf5] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_e9602b3a0b12bc96] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MessagesParser::MessagesParser(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

          ::org::orekit::gnss::metric::messages::ParsedMessage MessagesParser::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jboolean a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_2152864a37772c07], a0.this$, a1));
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
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeComponents::class$ = NULL;
      jmethodID *TimeComponents::mids$ = NULL;
      bool TimeComponents::live$ = false;
      TimeComponents *TimeComponents::H00 = NULL;
      TimeComponents *TimeComponents::H12 = NULL;

      jclass TimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_78e41e7b5124a628] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_f5c307da94f08e20] = env->getMethodID(cls, "<init>", "(IIDI)V");
          mids$[mid_compareTo_623b59d411cbe30a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/TimeComponents;)I");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_formatUtcOffset_0090f7797e403f43] = env->getMethodID(cls, "formatUtcOffset", "()Ljava/lang/String;");
          mids$[mid_fromSeconds_e2c98614b05dfb5f] = env->getStaticMethodID(cls, "fromSeconds", "(IDDI)Lorg/orekit/time/TimeComponents;");
          mids$[mid_getHour_f2f64475e4580546] = env->getMethodID(cls, "getHour", "()I");
          mids$[mid_getMinute_f2f64475e4580546] = env->getMethodID(cls, "getMinute", "()I");
          mids$[mid_getMinutesFromUTC_f2f64475e4580546] = env->getMethodID(cls, "getMinutesFromUTC", "()I");
          mids$[mid_getSecond_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecond", "()D");
          mids$[mid_getSecondsInLocalDay_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondsInLocalDay", "()D");
          mids$[mid_getSecondsInUTCDay_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondsInUTCDay", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseTime_a4b31ee1ef637293] = env->getStaticMethodID(cls, "parseTime", "(Ljava/lang/String;)Lorg/orekit/time/TimeComponents;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_0090f7797e403f43] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          H00 = new TimeComponents(env->getStaticObjectField(cls, "H00", "Lorg/orekit/time/TimeComponents;"));
          H12 = new TimeComponents(env->getStaticObjectField(cls, "H12", "Lorg/orekit/time/TimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeComponents::TimeComponents(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      TimeComponents::TimeComponents(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78e41e7b5124a628, a0, a1, a2)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c307da94f08e20, a0, a1, a2, a3)) {}

      jint TimeComponents::compareTo(const TimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_623b59d411cbe30a], a0.this$);
      }

      jboolean TimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::java::lang::String TimeComponents::formatUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_formatUtcOffset_0090f7797e403f43]));
      }

      TimeComponents TimeComponents::fromSeconds(jint a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_fromSeconds_e2c98614b05dfb5f], a0, a1, a2, a3));
      }

      jint TimeComponents::getHour() const
      {
        return env->callIntMethod(this$, mids$[mid_getHour_f2f64475e4580546]);
      }

      jint TimeComponents::getMinute() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinute_f2f64475e4580546]);
      }

      jint TimeComponents::getMinutesFromUTC() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinutesFromUTC_f2f64475e4580546]);
      }

      jdouble TimeComponents::getSecond() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecond_456d9a2f64d6b28d]);
      }

      jdouble TimeComponents::getSecondsInLocalDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInLocalDay_456d9a2f64d6b28d]);
      }

      jdouble TimeComponents::getSecondsInUTCDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInUTCDay_456d9a2f64d6b28d]);
      }

      jint TimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      TimeComponents TimeComponents::parseTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseTime_a4b31ee1ef637293], a0.this$));
      }

      ::java::lang::String TimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::java::lang::String TimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_0090f7797e403f43]));
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
      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg);
      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data);
      static PyGetSetDef t_TimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_TimeComponents, hour),
        DECLARE_GET_FIELD(t_TimeComponents, minute),
        DECLARE_GET_FIELD(t_TimeComponents, minutesFromUTC),
        DECLARE_GET_FIELD(t_TimeComponents, second),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInLocalDay),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInUTCDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeComponents__methods_[] = {
        DECLARE_METHOD(t_TimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_TimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, formatUtcOffset, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, fromSeconds, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, getHour, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinute, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinutesFromUTC, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInLocalDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInUTCDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, parseTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, toStringWithoutUtcOffset, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeComponents)[] = {
        { Py_tp_methods, t_TimeComponents__methods_ },
        { Py_tp_init, (void *) t_TimeComponents_init_ },
        { Py_tp_getset, t_TimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeComponents, t_TimeComponents, TimeComponents);

      void t_TimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeComponents), &PY_TYPE_DEF(TimeComponents), module, "TimeComponents", 0);
      }

      void t_TimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "class_", make_descriptor(TimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "wrapfn_", make_descriptor(t_TimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H00", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H00)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H12", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H12)));
      }

      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeComponents::initializeClass, 1)))
          return NULL;
        return t_TimeComponents::wrap_Object(TimeComponents(((t_TimeComponents *) arg)->object.this$));
      }
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = TimeComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jint a3;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIDI", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2, a3));
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

      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg)
      {
        TimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", TimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.formatUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        TimeComponents result((jobject) NULL);

        if (!parseArgs(args, "IDDI", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::fromSeconds(a0, a1, a2, a3));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fromSeconds", args);
        return NULL;
      }

      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getHour());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinute());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecond());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::parseTime(a0));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTime", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getHour());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinute());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecond());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries$CompiledSeries::class$ = NULL;
      jmethodID *PoissonSeries$CompiledSeries::mids$ = NULL;
      bool PoissonSeries$CompiledSeries::live$ = false;

      jclass PoissonSeries$CompiledSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries$CompiledSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_derivative_012501d58cd2c4a9] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_7ef60273b11c242d] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_012501d58cd2c4a9] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_7ef60273b11c242d] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_012501d58cd2c4a9], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_7ef60273b11c242d], a0.this$));
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_012501d58cd2c4a9], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_7ef60273b11c242d], a0.this$));
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
      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args);

      static PyMethodDef t_PoissonSeries$CompiledSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries$CompiledSeries)[] = {
        { Py_tp_methods, t_PoissonSeries$CompiledSeries__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries$CompiledSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries$CompiledSeries, t_PoissonSeries$CompiledSeries, PoissonSeries$CompiledSeries);

      void t_PoissonSeries$CompiledSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries$CompiledSeries), &PY_TYPE_DEF(PoissonSeries$CompiledSeries), module, "PoissonSeries$CompiledSeries", 0);
      }

      void t_PoissonSeries$CompiledSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "class_", make_descriptor(PoissonSeries$CompiledSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "wrapfn_", make_descriptor(t_PoissonSeries$CompiledSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries$CompiledSeries::wrap_Object(PoissonSeries$CompiledSeries(((t_PoissonSeries$CompiledSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonFieldAbstractIntegratedPropagator::live$ = false;

        jclass PythonFieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb107a39f80551b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_b12e4020688f2d3a] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_9199626b9ad748bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractIntegratedPropagator::PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fb107a39f80551b6, a0.this$, a1.this$, a2.this$)) {}

        void PythonFieldAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldAbstractIntegratedPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace integration {
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractIntegratedPropagator, t_PythonFieldAbstractIntegratedPropagator, PythonFieldAbstractIntegratedPropagator);
        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_Object(const PythonFieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator), module, "PythonFieldAbstractIntegratedPropagator", 1);
        }

        void t_PythonFieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "class_", make_descriptor(PythonFieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;", (void *) t_PythonFieldAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractIntegratedPropagator::wrap_Object(PythonFieldAbstractIntegratedPropagator(((t_PythonFieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::PropagationType a2((jobject) NULL);
          PyTypeObject **p2;
          PythonFieldAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractIntegratedPropagator(a0, a1, a2));
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

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldStateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OOOOOO", o0, o1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(::org::hipparchus::ode::FieldODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientField::class$ = NULL;
        jmethodID *GradientField::mids$ = NULL;
        bool GradientField::live$ = false;

        jclass GradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_d5aa7f1acb4ecb5d] = env->getStaticMethodID(cls, "getField", "(I)Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getOne_4ed8e234724fadba] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_4ed8e234724fadba] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean GradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        GradientField GradientField::getField(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_d5aa7f1acb4ecb5d], a0));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getOne_4ed8e234724fadba]));
        }

        ::java::lang::Class GradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getZero_4ed8e234724fadba]));
        }

        jint GradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_getOne(t_GradientField *self);
        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self);
        static PyObject *t_GradientField_getZero(t_GradientField *self);
        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data);
        static PyGetSetDef t_GradientField__fields_[] = {
          DECLARE_GET_FIELD(t_GradientField, one),
          DECLARE_GET_FIELD(t_GradientField, runtimeClass),
          DECLARE_GET_FIELD(t_GradientField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GradientField__methods_[] = {
          DECLARE_METHOD(t_GradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_GradientField, getField, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientField)[] = {
          { Py_tp_methods, t_GradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientField, t_GradientField, GradientField);

        void t_GradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientField), &PY_TYPE_DEF(GradientField), module, "GradientField", 0);
        }

        void t_GradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "class_", make_descriptor(GradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "wrapfn_", make_descriptor(t_GradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientField::initializeClass, 1)))
            return NULL;
          return t_GradientField::wrap_Object(GradientField(((t_GradientField *) arg)->object.this$));
        }
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          GradientField result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::GradientField::getField(a0));
            return t_GradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", arg);
          return NULL;
        }

        static PyObject *t_GradientField_getOne(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GradientField_getZero(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonObservedMeasurement::class$ = NULL;
        jmethodID *PythonObservedMeasurement::mids$ = NULL;
        bool PythonObservedMeasurement::live$ = false;

        jclass PythonObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_compareTo_5d68114462a4e82e] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_estimate_9d5a7270ffb14a9e] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBaseWeight_7cdc325af0834901] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_0090f7797e403f43] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_7cdc325af0834901] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_a6156df500549a58] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_e470b6d9e0d979db] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEnabled_50a2e0b139e80a58] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonObservedMeasurement::PythonObservedMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonObservedMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonObservedMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonObservedMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args);
        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self);
        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args);
        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0);
        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data);
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data);
        static PyGetSetDef t_PythonObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, self),
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonObservedMeasurement)[] = {
          { Py_tp_methods, t_PythonObservedMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonObservedMeasurement_init_ },
          { Py_tp_getset, t_PythonObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonObservedMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonObservedMeasurement, t_PythonObservedMeasurement, PythonObservedMeasurement);
        PyObject *t_PythonObservedMeasurement::wrap_Object(const PythonObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonObservedMeasurement), &PY_TYPE_DEF(PythonObservedMeasurement), module, "PythonObservedMeasurement", 1);
        }

        void t_PythonObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "class_", make_descriptor(PythonObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "wrapfn_", make_descriptor(t_PythonObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonObservedMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonObservedMeasurement_addModifier0 },
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonObservedMeasurement_compareTo1 },
            { "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonObservedMeasurement_estimate2 },
            { "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonObservedMeasurement_estimateWithoutDerivatives3 },
            { "getBaseWeight", "()[D", (void *) t_PythonObservedMeasurement_getBaseWeight4 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonObservedMeasurement_getDate5 },
            { "getDimension", "()I", (void *) t_PythonObservedMeasurement_getDimension6 },
            { "getMeasurementType", "()Ljava/lang/String;", (void *) t_PythonObservedMeasurement_getMeasurementType7 },
            { "getModifiers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getModifiers8 },
            { "getObservedValue", "()[D", (void *) t_PythonObservedMeasurement_getObservedValue9 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getParametersDrivers10 },
            { "getSatellites", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getSatellites11 },
            { "getTheoreticalStandardDeviation", "()[D", (void *) t_PythonObservedMeasurement_getTheoreticalStandardDeviation12 },
            { "isEnabled", "()Z", (void *) t_PythonObservedMeasurement_isEnabled13 },
            { "pythonDecRef", "()V", (void *) t_PythonObservedMeasurement_pythonDecRef14 },
            { "setEnabled", "(Z)V", (void *) t_PythonObservedMeasurement_setEnabled15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonObservedMeasurement::wrap_Object(PythonObservedMeasurement(((t_PythonObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonObservedMeasurement object((jobject) NULL);

          INT_CALL(object = PythonObservedMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
          PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimate", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("estimate", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimateWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("estimateWithoutDerivatives", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBaseWeight", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getBaseWeight", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMeasurementType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getMeasurementType", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getModifiers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getTheoreticalStandardDeviation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getTheoreticalStandardDeviation", result);
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

        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isEnabled", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = (a0 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "setEnabled", "O", o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data)
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
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *LazyLoadedTimeScales::class$ = NULL;
      jmethodID *LazyLoadedTimeScales::mids$ = NULL;
      bool LazyLoadedTimeScales::live$ = false;

      jclass LazyLoadedTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/LazyLoadedTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_252e710e5a0593c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;)V");
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_7ae3461a92a43152] = env->getMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_fd1ab7015414bef0] = env->getMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_7ae3461a92a43152] = env->getMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_deaa012966748070] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_c91e99b6d55c6edd] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_9d529a30e942a554] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_c3529b957726f144] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_11ee1ca64364e897] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_ec0466e710e3daab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_7f540f12419eda56] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_9316322b62b6b656] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_2460e78d331af28f] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_30aeac15cc80b3c1] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_0bcc4110bc5be1d2] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_9be074c5a298fe1e] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_7b22e00b4ab08eba] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_603d1058a5002a04] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_ed870393143e8ecb] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_getEopHistory_7544a283da003d74] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedTimeScales::LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop & a0) : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_252e710e5a0593c8, a0.this$)) {}

      void LazyLoadedTimeScales::addDefaultUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultUTCTAIOffsetsLoaders_7ae3461a92a43152]);
      }

      void LazyLoadedTimeScales::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addUTCTAIOffsetsLoader_fd1ab7015414bef0], a0.this$);
      }

      void LazyLoadedTimeScales::clearUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearUTCTAIOffsetsLoaders_7ae3461a92a43152]);
      }

      ::org::orekit::time::BDTScale LazyLoadedTimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_deaa012966748070]));
      }

      ::org::orekit::time::GLONASSScale LazyLoadedTimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_c91e99b6d55c6edd]));
      }

      ::org::orekit::time::GMSTScale LazyLoadedTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_9d529a30e942a554], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale LazyLoadedTimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_c3529b957726f144]));
      }

      ::org::orekit::time::GalileoScale LazyLoadedTimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_11ee1ca64364e897]));
      }

      ::org::orekit::time::IRNSSScale LazyLoadedTimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_ec0466e710e3daab]));
      }

      ::org::orekit::time::QZSSScale LazyLoadedTimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_7f540f12419eda56]));
      }

      ::org::orekit::time::TAIScale LazyLoadedTimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_9316322b62b6b656]));
      }

      ::org::orekit::time::TCBScale LazyLoadedTimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_2460e78d331af28f]));
      }

      ::org::orekit::time::TCGScale LazyLoadedTimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_30aeac15cc80b3c1]));
      }

      ::org::orekit::time::TDBScale LazyLoadedTimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_0bcc4110bc5be1d2]));
      }

      ::org::orekit::time::TTScale LazyLoadedTimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_9be074c5a298fe1e]));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_7b22e00b4ab08eba], a0.this$));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_603d1058a5002a04], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale LazyLoadedTimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_ed870393143e8ecb]));
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
      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data);
      static PyGetSetDef t_LazyLoadedTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, bDT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gLONASS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gPS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gST),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, iRNSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, qZSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tAI),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCG),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tDB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedTimeScales__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addUTCTAIOffsetsLoader, METH_O),
        DECLARE_METHOD(t_LazyLoadedTimeScales, clearUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getBDT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGLONASS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGPS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getIRNSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getQZSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTAI, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCG, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTDB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUTC, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedTimeScales)[] = {
        { Py_tp_methods, t_LazyLoadedTimeScales__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedTimeScales_init_ },
        { Py_tp_getset, t_LazyLoadedTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(LazyLoadedTimeScales, t_LazyLoadedTimeScales, LazyLoadedTimeScales);

      void t_LazyLoadedTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedTimeScales), &PY_TYPE_DEF(LazyLoadedTimeScales), module, "LazyLoadedTimeScales", 0);
      }

      void t_LazyLoadedTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "class_", make_descriptor(LazyLoadedTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "wrapfn_", make_descriptor(t_LazyLoadedTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedTimeScales::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedTimeScales::wrap_Object(LazyLoadedTimeScales(((t_LazyLoadedTimeScales *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        LazyLoadedTimeScales object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::LazyLoadedEop::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedTimeScales(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getBDT());
          return ::org::orekit::time::t_BDTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getBDT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGLONASS());
          return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGLONASS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGMST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGPS());
          return ::org::orekit::time::t_GPSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGPS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGST());
          return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIRNSS());
          return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getIRNSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getQZSS());
          return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getQZSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTAI());
          return ::org::orekit::time::t_TAIScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTAI", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCB());
          return ::org::orekit::time::t_TCBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCG());
          return ::org::orekit::time::t_TCGScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCG", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTDB());
          return ::org::orekit::time::t_TDBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTDB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTT());
          return ::org::orekit::time::t_TTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getUTC());
          return ::org::orekit::time::t_UTCScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUTC", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Data::class$ = NULL;
              jmethodID *SsrIgm06Data::mids$ = NULL;
              bool SsrIgm06Data::live$ = false;

              jclass SsrIgm06Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addPhaseBias_0a16022ba7e9bf2f] = env->getMethodID(cls, "addPhaseBias", "(Lorg/orekit/gnss/metric/messages/common/PhaseBias;)V");
                  mids$[mid_getNumberOfBiasesProcessed_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_getPhaseBias_e35bfa945b1ed756] = env->getMethodID(cls, "getPhaseBias", "(I)Lorg/orekit/gnss/metric/messages/common/PhaseBias;");
                  mids$[mid_getPhaseBiases_d6753b7055940a54] = env->getMethodID(cls, "getPhaseBiases", "()Ljava/util/Map;");
                  mids$[mid_getYawAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getYawAngle", "()D");
                  mids$[mid_getYawRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getYawRate", "()D");
                  mids$[mid_setNumberOfBiasesProcessed_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");
                  mids$[mid_setYawAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYawAngle", "(D)V");
                  mids$[mid_setYawRate_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYawRate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Data::SsrIgm06Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              void SsrIgm06Data::addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addPhaseBias_0a16022ba7e9bf2f], a0.this$);
              }

              jint SsrIgm06Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::PhaseBias SsrIgm06Data::getPhaseBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::PhaseBias(env->callObjectMethod(this$, mids$[mid_getPhaseBias_e35bfa945b1ed756], a0));
              }

              ::java::util::Map SsrIgm06Data::getPhaseBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getPhaseBiases_d6753b7055940a54]));
              }

              jdouble SsrIgm06Data::getYawAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawAngle_456d9a2f64d6b28d]);
              }

              jdouble SsrIgm06Data::getYawRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawRate_456d9a2f64d6b28d]);
              }

              void SsrIgm06Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_0a2a1ac2721c0336], a0);
              }

              void SsrIgm06Data::setYawAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawAngle_77e0f9a1f260e2e5], a0);
              }

              void SsrIgm06Data::setYawRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawRate_77e0f9a1f260e2e5], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data);
              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm06Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, numberOfBiasesProcessed),
                DECLARE_GET_FIELD(t_SsrIgm06Data, phaseBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawAngle),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, addPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawAngle, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawRate, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, setNumberOfBiasesProcessed, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawAngle, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawRate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Data)[] = {
                { Py_tp_methods, t_SsrIgm06Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Data_init_ },
                { Py_tp_getset, t_SsrIgm06Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Data, t_SsrIgm06Data, SsrIgm06Data);

              void t_SsrIgm06Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Data), &PY_TYPE_DEF(SsrIgm06Data), module, "SsrIgm06Data", 0);
              }

              void t_SsrIgm06Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "class_", make_descriptor(SsrIgm06Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "wrapfn_", make_descriptor(t_SsrIgm06Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Data::wrap_Object(SsrIgm06Data(((t_SsrIgm06Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Data object((jobject) NULL);

                INT_CALL(object = SsrIgm06Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::PhaseBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::PhaseBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addPhaseBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::PhaseBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getPhaseBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_PhaseBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(PhaseBias));
              }

              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawAngle", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawRate", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawAngle", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawRate", arg);
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
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Edge::class$ = NULL;
          jmethodID *Edge::mids$ = NULL;
          bool Edge::live$ = false;

          jclass Edge::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Edge");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCircle_15409f4dd57c6afd] = env->getMethodID(cls, "getCircle", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getEnd_729ee436c51c3951] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");
              mids$[mid_getLength_456d9a2f64d6b28d] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getPointAt_5f993a721a1d8c59] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getStart_729ee436c51c3951] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Circle Edge::getCircle() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Circle(env->callObjectMethod(this$, mids$[mid_getCircle_15409f4dd57c6afd]));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getEnd() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getEnd_729ee436c51c3951]));
          }

          jdouble Edge::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Edge::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_5f993a721a1d8c59], a0));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getStart() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getStart_729ee436c51c3951]));
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
        namespace twod {
          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_getCircle(t_Edge *self);
          static PyObject *t_Edge_getEnd(t_Edge *self);
          static PyObject *t_Edge_getLength(t_Edge *self);
          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg);
          static PyObject *t_Edge_getStart(t_Edge *self);
          static PyObject *t_Edge_get__circle(t_Edge *self, void *data);
          static PyObject *t_Edge_get__end(t_Edge *self, void *data);
          static PyObject *t_Edge_get__length(t_Edge *self, void *data);
          static PyObject *t_Edge_get__start(t_Edge *self, void *data);
          static PyGetSetDef t_Edge__fields_[] = {
            DECLARE_GET_FIELD(t_Edge, circle),
            DECLARE_GET_FIELD(t_Edge, end),
            DECLARE_GET_FIELD(t_Edge, length),
            DECLARE_GET_FIELD(t_Edge, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Edge__methods_[] = {
            DECLARE_METHOD(t_Edge, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, getCircle, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getPointAt, METH_O),
            DECLARE_METHOD(t_Edge, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Edge)[] = {
            { Py_tp_methods, t_Edge__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Edge__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Edge)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Edge, t_Edge, Edge);

          void t_Edge::install(PyObject *module)
          {
            installType(&PY_TYPE(Edge), &PY_TYPE_DEF(Edge), module, "Edge", 0);
          }

          void t_Edge::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "class_", make_descriptor(Edge::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "wrapfn_", make_descriptor(t_Edge::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Edge::initializeClass, 1)))
              return NULL;
            return t_Edge::wrap_Object(Edge(((t_Edge *) arg)->object.this$));
          }
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Edge::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Edge_getCircle(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(result);
          }

          static PyObject *t_Edge_getEnd(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_getLength(t_Edge *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Edge_getStart(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_get__circle(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(value);
          }

          static PyObject *t_Edge_get__end(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }

          static PyObject *t_Edge_get__length(t_Edge *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Edge_get__start(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e397e577465cf077] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_ca2be72fa188dbd5] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_da01eb6db2e32536] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_create_2ea6f0c8aa0e16b0] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, const ::org::hipparchus::ode::events::FilterType & a2) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(env->newObject(initializeClass, &mids$, mid_init$_e397e577465cf077, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ca2be72fa188dbd5], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_da01eb6db2e32536]));
        }

        void FieldEventSlopeFilter::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractFieldODEDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FilterType a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeModifierUtil::class$ = NULL;
          jmethodID *RangeModifierUtil::mids$ = NULL;
          bool RangeModifierUtil::live$ = false;

          jclass RangeModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeModifierUtil)[] = {
            { Py_tp_methods, t_RangeModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeModifierUtil, t_RangeModifierUtil, RangeModifierUtil);

          void t_RangeModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeModifierUtil), &PY_TYPE_DEF(RangeModifierUtil), module, "RangeModifierUtil", 0);
          }

          void t_RangeModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "class_", make_descriptor(RangeModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "wrapfn_", make_descriptor(t_RangeModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeModifierUtil::wrap_Object(RangeModifierUtil(((t_RangeModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeModifierUtil::initializeClass, 0))
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
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator::class$ = NULL;
        jmethodID *HarmonicOscillator::mids$ = NULL;
        bool HarmonicOscillator::live$ = false;

        jclass HarmonicOscillator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator::HarmonicOscillator(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble HarmonicOscillator::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative HarmonicOscillator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator)[] = {
          { Py_tp_methods, t_HarmonicOscillator__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator, t_HarmonicOscillator, HarmonicOscillator);

        void t_HarmonicOscillator::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator), &PY_TYPE_DEF(HarmonicOscillator), module, "HarmonicOscillator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "Parametric", make_descriptor(&PY_TYPE_DEF(HarmonicOscillator$Parametric)));
        }

        void t_HarmonicOscillator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "class_", make_descriptor(HarmonicOscillator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "wrapfn_", make_descriptor(t_HarmonicOscillator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator::wrap_Object(HarmonicOscillator(((t_HarmonicOscillator *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HarmonicOscillator object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HarmonicOscillator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args)
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
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonGroundPointing::class$ = NULL;
      jmethodID *PythonGroundPointing::mids$ = NULL;
      bool PythonGroundPointing::live$ = false;

      jclass PythonGroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonGroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff759ca5658b74c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonGroundPointing::PythonGroundPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_ff759ca5658b74c4, a0.this$, a1.this$)) {}

      void PythonGroundPointing::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonGroundPointing::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonGroundPointing::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self);
      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data);
      static PyGetSetDef t_PythonGroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_PythonGroundPointing, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonGroundPointing__methods_[] = {
        DECLARE_METHOD(t_PythonGroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonGroundPointing, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonGroundPointing)[] = {
        { Py_tp_methods, t_PythonGroundPointing__methods_ },
        { Py_tp_init, (void *) t_PythonGroundPointing_init_ },
        { Py_tp_getset, t_PythonGroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonGroundPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(PythonGroundPointing, t_PythonGroundPointing, PythonGroundPointing);

      void t_PythonGroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonGroundPointing), &PY_TYPE_DEF(PythonGroundPointing), module, "PythonGroundPointing", 1);
      }

      void t_PythonGroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "class_", make_descriptor(PythonGroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "wrapfn_", make_descriptor(t_PythonGroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonGroundPointing::initializeClass);
        JNINativeMethod methods[] = {
          { "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV0 },
          { "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV1 },
          { "pythonDecRef", "()V", (void *) t_PythonGroundPointing_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonGroundPointing::initializeClass, 1)))
          return NULL;
        return t_PythonGroundPointing::wrap_Object(PythonGroundPointing(((t_PythonGroundPointing *) arg)->object.this$));
      }
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonGroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        PythonGroundPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonGroundPointing(a0, a1));
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

      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args)
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNegateDetector::class$ = NULL;
        jmethodID *FieldNegateDetector::mids$ = NULL;
        bool FieldNegateDetector::live$ = false;

        jclass FieldNegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1843b26af41f9c8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOriginal_9afb3f6694da2222] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_45f2f444587ff7a1] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNegateDetector::FieldNegateDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1843b26af41f9c8e, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNegateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldNegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_9afb3f6694da2222]));
        }

        void FieldNegateDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args);
        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self);
        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data);
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data);
        static PyGetSetDef t_FieldNegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNegateDetector, original),
          DECLARE_GET_FIELD(t_FieldNegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNegateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_FieldNegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNegateDetector)[] = {
          { Py_tp_methods, t_FieldNegateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNegateDetector_init_ },
          { Py_tp_getset, t_FieldNegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNegateDetector, t_FieldNegateDetector, FieldNegateDetector);
        PyObject *t_FieldNegateDetector::wrap_Object(const FieldNegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNegateDetector), &PY_TYPE_DEF(FieldNegateDetector), module, "FieldNegateDetector", 0);
        }

        void t_FieldNegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "class_", make_descriptor(FieldNegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "wrapfn_", make_descriptor(t_FieldNegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNegateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNegateDetector::wrap_Object(FieldNegateDetector(((t_FieldNegateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldNegateDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldNegateDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative::class$ = NULL;
        jmethodID *FieldUnivariateDerivative::mids$ = NULL;
        bool FieldUnivariateDerivative::live$ = false;

        jclass FieldUnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_d0960d09d84b1c1d] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_f622835d869c0081] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDerivativeStructure_7208bb4259086f92] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative::FieldUnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d0960d09d84b1c1d], a0));
        }

        jint FieldUnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_f622835d869c0081], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_7208bb4259086f92]));
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
        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args);
        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data);
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative, t_FieldUnivariateDerivative, FieldUnivariateDerivative);
        PyObject *t_FieldUnivariateDerivative::wrap_Object(const FieldUnivariateDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative), &PY_TYPE_DEF(FieldUnivariateDerivative), module, "FieldUnivariateDerivative", 0);
        }

        void t_FieldUnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "class_", make_descriptor(FieldUnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative::wrap_Object(FieldUnivariateDerivative(((t_FieldUnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          FieldUnivariateDerivative object((jobject) NULL);

          INT_CALL(object = FieldUnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficients::class$ = NULL;
          jmethodID *OceanLoadingCoefficients::mids$ = NULL;
          bool OceanLoadingCoefficients::live$ = false;

          jclass OceanLoadingCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07c801f17154fb71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;[[Lorg/orekit/models/earth/displacement/Tide;[[D[[D[[D[[D[[D[[D)V");
              mids$[mid_getNbSpecies_f2f64475e4580546] = env->getMethodID(cls, "getNbSpecies", "()I");
              mids$[mid_getNbTides_38565d58479aa24a] = env->getMethodID(cls, "getNbTides", "(I)I");
              mids$[mid_getSiteLocation_fabc97b1aefe5844] = env->getMethodID(cls, "getSiteLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getSiteName_0090f7797e403f43] = env->getMethodID(cls, "getSiteName", "()Ljava/lang/String;");
              mids$[mid_getSouthAmplitude_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getSouthAmplitude", "(II)D");
              mids$[mid_getSouthPhase_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getSouthPhase", "(II)D");
              mids$[mid_getTide_8d497e94d9aa86f9] = env->getMethodID(cls, "getTide", "(II)Lorg/orekit/models/earth/displacement/Tide;");
              mids$[mid_getWestAmplitude_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getWestAmplitude", "(II)D");
              mids$[mid_getWestPhase_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getWestPhase", "(II)D");
              mids$[mid_getZenithAmplitude_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getZenithAmplitude", "(II)D");
              mids$[mid_getZenithPhase_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getZenithPhase", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficients::OceanLoadingCoefficients(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5, const JArray< JArray< jdouble > > & a6, const JArray< JArray< jdouble > > & a7, const JArray< JArray< jdouble > > & a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07c801f17154fb71, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

          jint OceanLoadingCoefficients::getNbSpecies() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSpecies_f2f64475e4580546]);
          }

          jint OceanLoadingCoefficients::getNbTides(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getNbTides_38565d58479aa24a], a0);
          }

          ::org::orekit::bodies::GeodeticPoint OceanLoadingCoefficients::getSiteLocation() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getSiteLocation_fabc97b1aefe5844]));
          }

          ::java::lang::String OceanLoadingCoefficients::getSiteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteName_0090f7797e403f43]));
          }

          jdouble OceanLoadingCoefficients::getSouthAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthAmplitude_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getSouthPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthPhase_a84e4ee1da3f1ab8], a0, a1);
          }

          ::org::orekit::models::earth::displacement::Tide OceanLoadingCoefficients::getTide(jint a0, jint a1) const
          {
            return ::org::orekit::models::earth::displacement::Tide(env->callObjectMethod(this$, mids$[mid_getTide_8d497e94d9aa86f9], a0, a1));
          }

          jdouble OceanLoadingCoefficients::getWestAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestAmplitude_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getWestPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestPhase_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithAmplitude_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithPhase_a84e4ee1da3f1ab8], a0, a1);
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
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, nbSpecies),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteLocation),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbSpecies, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbTides, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteLocation, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteName, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getTide, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithPhase, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficients__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficients_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficients, t_OceanLoadingCoefficients, OceanLoadingCoefficients);

          void t_OceanLoadingCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficients), &PY_TYPE_DEF(OceanLoadingCoefficients), module, "OceanLoadingCoefficients", 0);
          }

          void t_OceanLoadingCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "class_", make_descriptor(OceanLoadingCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "wrapfn_", make_descriptor(t_OceanLoadingCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficients::wrap_Object(OceanLoadingCoefficients(((t_OceanLoadingCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            JArray< JArray< jdouble > > a5((jobject) NULL);
            JArray< JArray< jdouble > > a6((jobject) NULL);
            JArray< JArray< jdouble > > a7((jobject) NULL);
            JArray< JArray< jdouble > > a8((jobject) NULL);
            OceanLoadingCoefficients object((jobject) NULL);

            if (!parseArgs(args, "sk[[k[[D[[D[[D[[D[[D[[D", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::models::earth::displacement::Tide::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = OceanLoadingCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSpecies());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getNbTides(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNbTides", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteName());
            return j2p(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::models::earth::displacement::Tide result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTide(a0, a1));
              return ::org::orekit::models::earth::displacement::t_Tide::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTide", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSpecies());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Apm::class$ = NULL;
              jmethodID *Apm::mids$ = NULL;
              bool Apm::live$ = false;
              ::java::lang::String *Apm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Apm::ROOT = NULL;

              jclass Apm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Apm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ebab4e4b79b3ed3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAttitude_c9f7c61258637afb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getData_bf6e217552aaa6b8] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmData;");
                  mids$[mid_getMetadata_ae810d18785bab2b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Apm::Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_7ebab4e4b79b3ed3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::attitudes::Attitude Apm::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_c9f7c61258637afb], a0.this$, a1.this$));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmData Apm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmData(env->callObjectMethod(this$, mids$[mid_getData_bf6e217552aaa6b8]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata Apm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_ae810d18785bab2b]));
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
            namespace apm {
              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args);
              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args);
              static PyObject *t_Apm_getData(t_Apm *self);
              static PyObject *t_Apm_getMetadata(t_Apm *self);
              static PyObject *t_Apm_get__data(t_Apm *self, void *data);
              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data);
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data);
              static PyGetSetDef t_Apm__fields_[] = {
                DECLARE_GET_FIELD(t_Apm, data),
                DECLARE_GET_FIELD(t_Apm, metadata),
                DECLARE_GET_FIELD(t_Apm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Apm__methods_[] = {
                DECLARE_METHOD(t_Apm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Apm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Apm)[] = {
                { Py_tp_methods, t_Apm__methods_ },
                { Py_tp_init, (void *) t_Apm_init_ },
                { Py_tp_getset, t_Apm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Apm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Apm, t_Apm, Apm);
              PyObject *t_Apm::wrap_Object(const Apm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Apm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Apm::install(PyObject *module)
              {
                installType(&PY_TYPE(Apm), &PY_TYPE_DEF(Apm), module, "Apm", 0);
              }

              void t_Apm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "class_", make_descriptor(Apm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "wrapfn_", make_descriptor(t_Apm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Apm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Apm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "ROOT", make_descriptor(j2p(*Apm::ROOT)));
              }

              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Apm::initializeClass, 1)))
                  return NULL;
                return t_Apm::wrap_Object(Apm(((t_Apm *) arg)->object.this$));
              }
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Apm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Apm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Apm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_Apm_getData(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(result);
              }

              static PyObject *t_Apm_getMetadata(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(result);
              }
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Apm_get__data(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(value);
              }

              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(value);
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
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedRate::class$ = NULL;
      jmethodID *FixedRate::mids$ = NULL;
      bool FixedRate::live$ = false;

      jclass FixedRate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedRate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1179b3ef3d8dcd30] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getReferenceAttitude_78dca83e076ede35] = env->getMethodID(cls, "getReferenceAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedRate::FixedRate(const ::org::orekit::attitudes::Attitude & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1179b3ef3d8dcd30, a0.this$)) {}

      ::org::orekit::attitudes::Attitude FixedRate::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FixedRate::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedRate::getReferenceAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getReferenceAttitude_78dca83e076ede35]));
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
      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args);
      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self);
      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data);
      static PyGetSetDef t_FixedRate__fields_[] = {
        DECLARE_GET_FIELD(t_FixedRate, referenceAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FixedRate__methods_[] = {
        DECLARE_METHOD(t_FixedRate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FixedRate, getReferenceAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedRate)[] = {
        { Py_tp_methods, t_FixedRate__methods_ },
        { Py_tp_init, (void *) t_FixedRate_init_ },
        { Py_tp_getset, t_FixedRate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedRate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedRate, t_FixedRate, FixedRate);

      void t_FixedRate::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedRate), &PY_TYPE_DEF(FixedRate), module, "FixedRate", 0);
      }

      void t_FixedRate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "class_", make_descriptor(FixedRate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "wrapfn_", make_descriptor(t_FixedRate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedRate::initializeClass, 1)))
          return NULL;
        return t_FixedRate::wrap_Object(FixedRate(((t_FixedRate *) arg)->object.this$));
      }
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedRate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        FixedRate object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::attitudes::Attitude::initializeClass, &a0))
        {
          INT_CALL(object = FixedRate(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSOrbitalElements::class$ = NULL;
            jmethodID *GNSSOrbitalElements::mids$ = NULL;
            bool GNSSOrbitalElements::live$ = false;

            jclass GNSSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAngularVelocity_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCic_456d9a2f64d6b28d] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_456d9a2f64d6b28d] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_456d9a2f64d6b28d] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getCycleDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_456d9a2f64d6b28d] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getM0_456d9a2f64d6b28d] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_9bde3ac5a964eae4] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_9251f1e2e600535b] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getPropagator_75251771a3c69b82] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
                mids$[mid_getSma_456d9a2f64d6b28d] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_f2f64475e4580546] = env->getMethodID(cls, "getWeek", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSOrbitalElements::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_456d9a2f64d6b28d]);
            }

            jint GNSSOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
            }

            jdouble GNSSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9bde3ac5a964eae4]));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9251f1e2e600535b], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSOrbitalElements::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_75251771a3c69b82], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GNSSOrbitalElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_456d9a2f64d6b28d]);
            }

            jdouble GNSSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jint GNSSOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_f2f64475e4580546]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args);
            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self);
            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data);
            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data);
            static PyGetSetDef t_GNSSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, angularVelocity),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cic),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cis),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, crs),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cuc),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cus),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, i0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, iDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, m0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, meanMotion),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, mu),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omega0),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, omegaDot),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, propagator),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, sma),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GNSSOrbitalElements, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GNSSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCic, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCis, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCus, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getI0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getM0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GNSSOrbitalElements, getWeek, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSOrbitalElements)[] = {
              { Py_tp_methods, t_GNSSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSOrbitalElements, t_GNSSOrbitalElements, GNSSOrbitalElements);

            void t_GNSSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSOrbitalElements), &PY_TYPE_DEF(GNSSOrbitalElements), module, "GNSSOrbitalElements", 0);
            }

            void t_GNSSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "class_", make_descriptor(GNSSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "wrapfn_", make_descriptor(t_GNSSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GNSSOrbitalElements::wrap_Object(GNSSOrbitalElements(((t_GNSSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSOrbitalElements_getAngularVelocity(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCic(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCis(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCrs(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCuc(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCus(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getCycleDuration(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getE(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getI0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getIDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getM0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMeanMotion(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getMu(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmega0(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getOmegaDot(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPRN(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPa(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getPropagator(t_GNSSOrbitalElements *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GNSSOrbitalElements_getSma(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getTime(t_GNSSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSOrbitalElements_getWeek(t_GNSSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GNSSOrbitalElements_get__angularVelocity(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cic(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cis(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__crs(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cuc(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cus(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__cycleDuration(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__e(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__i0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__iDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__m0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__meanMotion(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__mu(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omega0(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__omegaDot(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pRN(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__pa(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__propagator(t_GNSSOrbitalElements *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(value);
            }

            static PyObject *t_GNSSOrbitalElements_get__sma(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__time(t_GNSSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSOrbitalElements_get__week(t_GNSSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageParser::class$ = NULL;
            jmethodID *MessageParser::mids$ = NULL;
            bool MessageParser::live$ = false;

            jclass MessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_dfd7647d9110ac9f] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_getFileFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_691778b38b11996d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_9b91a684064d0956] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object MessageParser::build() const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_build_dfd7647d9110ac9f]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat MessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_b51f613f857a5e84]));
            }

            ::java::lang::String MessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_0090f7797e403f43]));
            }

            ::java::util::Map MessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
            }

            ::java::lang::Object MessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_691778b38b11996d], a0.this$));
            }

            void MessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_9b91a684064d0956], a0.this$);
            }

            void MessageParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args);
            static PyObject *t_MessageParser_build(t_MessageParser *self);
            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self);
            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self);
            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self);
            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data);
            static PyGetSetDef t_MessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_MessageParser, fileFormat),
              DECLARE_GET_FIELD(t_MessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_MessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageParser__methods_[] = {
              DECLARE_METHOD(t_MessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageParser, build, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_MessageParser, process, METH_O),
              DECLARE_METHOD(t_MessageParser, reset, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageParser)[] = {
              { Py_tp_methods, t_MessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageParser, t_MessageParser, MessageParser);
            PyObject *t_MessageParser::wrap_Object(const MessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageParser), &PY_TYPE_DEF(MessageParser), module, "MessageParser", 0);
            }

            void t_MessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "class_", make_descriptor(MessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "wrapfn_", make_descriptor(t_MessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageParser::initializeClass, 1)))
                return NULL;
              return t_MessageParser::wrap_Object(MessageParser(((t_MessageParser *) arg)->object.this$));
            }
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageParser_build(t_MessageParser *self)
            {
              ::java::lang::Object result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "reset", arg);
              return NULL;
            }
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *GeneratedMeasurementSubscriber::mids$ = NULL;
          bool GeneratedMeasurementSubscriber::live$ = false;

          jclass GeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_handleGeneratedMeasurement_54d78f04ce23dff7] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GeneratedMeasurementSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_54d78f04ce23dff7], a0.this$);
          }

          void GeneratedMeasurementSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args);

          static PyMethodDef t_GeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_GeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GeneratedMeasurementSubscriber, t_GeneratedMeasurementSubscriber, GeneratedMeasurementSubscriber);

          void t_GeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GeneratedMeasurementSubscriber), &PY_TYPE_DEF(GeneratedMeasurementSubscriber), module, "GeneratedMeasurementSubscriber", 0);
          }

          void t_GeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "class_", make_descriptor(GeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_GeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_GeneratedMeasurementSubscriber::wrap_Object(GeneratedMeasurementSubscriber(((t_GeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *IAUPole::class$ = NULL;
      jmethodID *IAUPole::mids$ = NULL;
      bool IAUPole::live$ = false;

      jclass IAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/IAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNode_71c51b45829333ce] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_11a4be79061d1fe3] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_71c51b45829333ce] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_11a4be79061d1fe3] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_e912d21057defe63] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_7bc0fd76ee915b72] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getNode(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNode_71c51b45829333ce], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getNode(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNode_11a4be79061d1fe3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getPole(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_71c51b45829333ce], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getPole(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPole_11a4be79061d1fe3], a0.this$));
      }

      jdouble IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPrimeMeridianAngle_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianAngle_7bc0fd76ee915b72], a0.this$));
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
      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args);

      static PyMethodDef t_IAUPole__methods_[] = {
        DECLARE_METHOD(t_IAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, getNode, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPole, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPrimeMeridianAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IAUPole)[] = {
        { Py_tp_methods, t_IAUPole__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IAUPole)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(IAUPole, t_IAUPole, IAUPole);

      void t_IAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(IAUPole), &PY_TYPE_DEF(IAUPole), module, "IAUPole", 0);
      }

      void t_IAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "class_", make_descriptor(IAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "wrapfn_", make_descriptor(t_IAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IAUPole::initializeClass, 1)))
          return NULL;
        return t_IAUPole::wrap_Object(IAUPole(((t_IAUPole *) arg)->object.this$));
      }
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNode", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPole", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrimeMeridianAngle", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservation::class$ = NULL;
          jmethodID *RinexObservation::mids$ = NULL;
          bool RinexObservation::live$ = false;

          jclass RinexObservation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addObservationDataSet_a74883e6a7063961] = env->getMethodID(cls, "addObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getObservationDataSets_a6156df500549a58] = env->getMethodID(cls, "getObservationDataSets", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservation::RinexObservation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void RinexObservation::addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addObservationDataSet_a74883e6a7063961], a0.this$);
          }

          ::java::util::List RinexObservation::getObservationDataSets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationDataSets_a6156df500549a58]));
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
        namespace observation {
          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args);
          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg);
          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self);
          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data);
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data);
          static PyGetSetDef t_RinexObservation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexObservation, observationDataSets),
            DECLARE_GET_FIELD(t_RinexObservation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservation__methods_[] = {
            DECLARE_METHOD(t_RinexObservation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservation, addObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservation, getObservationDataSets, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservation)[] = {
            { Py_tp_methods, t_RinexObservation__methods_ },
            { Py_tp_init, (void *) t_RinexObservation_init_ },
            { Py_tp_getset, t_RinexObservation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexObservation, t_RinexObservation, RinexObservation);
          PyObject *t_RinexObservation::wrap_Object(const RinexObservation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexObservation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexObservation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservation), &PY_TYPE_DEF(RinexObservation), module, "RinexObservation", 0);
          }

          void t_RinexObservation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "class_", make_descriptor(RinexObservation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "wrapfn_", make_descriptor(t_RinexObservation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservation::initializeClass, 1)))
              return NULL;
            return t_RinexObservation::wrap_Object(RinexObservation(((t_RinexObservation *) arg)->object.this$));
          }
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds)
          {
            RinexObservation object((jobject) NULL);

            INT_CALL(object = RinexObservation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::observation::PY_TYPE(RinexObservationHeader);

            return 0;
          }

          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationDataSet));
          }
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileParser::class$ = NULL;
        jmethodID *EphemerisFileParser::mids$ = NULL;
        bool EphemerisFileParser::live$ = false;

        jclass EphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_08d07e742af2bd58] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::EphemerisFile EphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::EphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_08d07e742af2bd58], a0.this$));
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
        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args);
        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg);
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data);
        static PyGetSetDef t_EphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileParser)[] = {
          { Py_tp_methods, t_EphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileParser, t_EphemerisFileParser, EphemerisFileParser);
        PyObject *t_EphemerisFileParser::wrap_Object(const EphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileParser), &PY_TYPE_DEF(EphemerisFileParser), module, "EphemerisFileParser", 0);
        }

        void t_EphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "class_", make_descriptor(EphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "wrapfn_", make_descriptor(t_EphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileParser::wrap_Object(EphemerisFileParser(((t_EphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_EphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GRGSFormatReader::class$ = NULL;
          jmethodID *GRGSFormatReader::mids$ = NULL;
          bool GRGSFormatReader::live$ = false;

          jclass GRGSFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GRGSFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_ead6ed0365e2cf97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_ead6ed0365e2cf97, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider GRGSFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_086897fc27688c23], a0, a1, a2));
          }

          void GRGSFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args);
          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args);

          static PyMethodDef t_GRGSFormatReader__methods_[] = {
            DECLARE_METHOD(t_GRGSFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_GRGSFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRGSFormatReader)[] = {
            { Py_tp_methods, t_GRGSFormatReader__methods_ },
            { Py_tp_init, (void *) t_GRGSFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRGSFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(GRGSFormatReader, t_GRGSFormatReader, GRGSFormatReader);

          void t_GRGSFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(GRGSFormatReader), &PY_TYPE_DEF(GRGSFormatReader), module, "GRGSFormatReader", 0);
          }

          void t_GRGSFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "class_", make_descriptor(GRGSFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "wrapfn_", make_descriptor(t_GRGSFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRGSFormatReader::initializeClass, 1)))
              return NULL;
            return t_GRGSFormatReader::wrap_Object(GRGSFormatReader(((t_GRGSFormatReader *) arg)->object.this$));
          }
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRGSFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1, a2));
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

          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args)
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

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ArithmeticUtils::class$ = NULL;
      jmethodID *ArithmeticUtils::mids$ = NULL;
      bool ArithmeticUtils::live$ = false;

      jclass ArithmeticUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ArithmeticUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAndCheck_d9790ac9eecfe931] = env->getStaticMethodID(cls, "addAndCheck", "(II)I");
          mids$[mid_addAndCheck_8f974216cbe53aea] = env->getStaticMethodID(cls, "addAndCheck", "(JJ)J");
          mids$[mid_divideUnsigned_d9790ac9eecfe931] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
          mids$[mid_divideUnsigned_8f974216cbe53aea] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
          mids$[mid_gcd_d9790ac9eecfe931] = env->getStaticMethodID(cls, "gcd", "(II)I");
          mids$[mid_gcd_8f974216cbe53aea] = env->getStaticMethodID(cls, "gcd", "(JJ)J");
          mids$[mid_isPowerOfTwo_9560f1672fe5dd29] = env->getStaticMethodID(cls, "isPowerOfTwo", "(J)Z");
          mids$[mid_lcm_d9790ac9eecfe931] = env->getStaticMethodID(cls, "lcm", "(II)I");
          mids$[mid_lcm_8f974216cbe53aea] = env->getStaticMethodID(cls, "lcm", "(JJ)J");
          mids$[mid_mulAndCheck_d9790ac9eecfe931] = env->getStaticMethodID(cls, "mulAndCheck", "(II)I");
          mids$[mid_mulAndCheck_8f974216cbe53aea] = env->getStaticMethodID(cls, "mulAndCheck", "(JJ)J");
          mids$[mid_pow_d9790ac9eecfe931] = env->getStaticMethodID(cls, "pow", "(II)I");
          mids$[mid_pow_1672c32325bd5d4a] = env->getStaticMethodID(cls, "pow", "(JI)J");
          mids$[mid_remainderUnsigned_d9790ac9eecfe931] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
          mids$[mid_remainderUnsigned_8f974216cbe53aea] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
          mids$[mid_subAndCheck_d9790ac9eecfe931] = env->getStaticMethodID(cls, "subAndCheck", "(II)I");
          mids$[mid_subAndCheck_8f974216cbe53aea] = env->getStaticMethodID(cls, "subAndCheck", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ArithmeticUtils::addAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addAndCheck_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::addAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addAndCheck_8f974216cbe53aea], a0, a1);
      }

      jint ArithmeticUtils::divideUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::divideUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_8f974216cbe53aea], a0, a1);
      }

      jint ArithmeticUtils::gcd(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_gcd_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::gcd(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_gcd_8f974216cbe53aea], a0, a1);
      }

      jboolean ArithmeticUtils::isPowerOfTwo(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isPowerOfTwo_9560f1672fe5dd29], a0);
      }

      jint ArithmeticUtils::lcm(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_lcm_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::lcm(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_lcm_8f974216cbe53aea], a0, a1);
      }

      jint ArithmeticUtils::mulAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_mulAndCheck_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::mulAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_mulAndCheck_8f974216cbe53aea], a0, a1);
      }

      jint ArithmeticUtils::pow(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_pow_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::pow(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_pow_1672c32325bd5d4a], a0, a1);
      }

      jint ArithmeticUtils::remainderUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::remainderUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_8f974216cbe53aea], a0, a1);
      }

      jint ArithmeticUtils::subAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subAndCheck_d9790ac9eecfe931], a0, a1);
      }

      jlong ArithmeticUtils::subAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subAndCheck_8f974216cbe53aea], a0, a1);
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
      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ArithmeticUtils__methods_[] = {
        DECLARE_METHOD(t_ArithmeticUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, addAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, divideUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, gcd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, isPowerOfTwo, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, lcm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, mulAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, remainderUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, subAndCheck, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArithmeticUtils)[] = {
        { Py_tp_methods, t_ArithmeticUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArithmeticUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArithmeticUtils, t_ArithmeticUtils, ArithmeticUtils);

      void t_ArithmeticUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ArithmeticUtils), &PY_TYPE_DEF(ArithmeticUtils), module, "ArithmeticUtils", 0);
      }

      void t_ArithmeticUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "class_", make_descriptor(ArithmeticUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "wrapfn_", make_descriptor(t_ArithmeticUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArithmeticUtils::initializeClass, 1)))
          return NULL;
        return t_ArithmeticUtils::wrap_Object(ArithmeticUtils(((t_ArithmeticUtils *) arg)->object.this$));
      }
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArithmeticUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "gcd", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jboolean result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::isPowerOfTwo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isPowerOfTwo", arg);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "lcm", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mulAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "remainderUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subAndCheck", args);
        return NULL;
      }
    }
  }
}
